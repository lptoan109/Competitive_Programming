#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int n, k, a[MAXN+5], kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("QUIZ.INP", "r", stdin);
    freopen("QUIZ.OUT", "w", stdout);
    cin >> n >> k;
    for(int i = 1; i<n; ++i){
        for(int j = i; j<n; j+=i){
            a[j]++;
        }
    }
    for(int i = 1; i<=n; ++i){
        if(a[i]==k){
            //cout << i << " ";
            kq++;
        }
    }
    //cout << "\n";
    cout << kq;
    return 0;
}
