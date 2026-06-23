#include <bits/stdc++.h>
using namespace std;
int n, a[1005], kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    for(int i = 1; i<=n; ++i){
        if(a[i]>0){
            int cnt = 0, t = i;
            while(a[t]>0){
                cnt++;
                t++;
            }
            kq = max(kq, cnt);
        }
    }
    cout << kq;
    return 0;
}
