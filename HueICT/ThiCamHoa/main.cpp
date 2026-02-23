#include <bits/stdc++.h>
using namespace std;
int a[15], s,n, r, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> s >> r;
    for(int i = 1; i<=s; ++i){
        int t;
        cin >> t;
        a[t]--;
    }
    for(int i = 1; i<=r; ++i){
        int t;
        cin >> t;
        if(a[t]==-1){
            a[t]++;
            continue;
        }
        if(t-1>0 && a[t-1]==-1){
            a[t-1]++;
            continue;
        }
        if(t+1<=n && a[t+1]==-1){
            a[t+1]++;
            continue;
        }
    }
    for(int i = 1; i<=n; ++i){
        if(a[i]==-1) kq++;
    }
    cout << kq;
    return 0;
}
