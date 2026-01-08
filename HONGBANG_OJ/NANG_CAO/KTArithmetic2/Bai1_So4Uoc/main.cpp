#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int a[MAXN+5];
void solution(int n){
    long long kq = 0;
    for(long long i = 1; i<=n; ++i){
        for(long long j = i; j<=n; j+=i){
            a[j]++;
        }
    }
    for(long long i = 1; i<=n; ++i){
        if(a[i]==4){
            cout << i << " ";
            kq++;
        }
    }
    cout << "\n" << kq;
}
int n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("UOC.INP", "r", stdin);
    freopen("UOC.OUT", "w", stdout);
    cin >> n;
    solution(n);
    return 0;
}
