#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int a[MAXN+5], t;
void solution(int n){
    for(int i = 1; i<=n; ++i){
            cin >> a[i];
        }
    for(int i = 2; i<=n; ++i){
        if(a[i-1]<=a[i]-1){
            a[i]--;
        }
        else if(a[i-1]<=a[i]+1){
            a[i]++;
        }
        else{
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        solution(n);
    }
    return 0;
}
