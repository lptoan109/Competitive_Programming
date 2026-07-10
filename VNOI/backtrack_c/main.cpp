#include <bits/stdc++.h>
using namespace std;
int n, k, a[17], kq;
int check(){
    int t = 0;
    for(int i = 1; i<n; ++i){
        for(int j = i+1; j<=n; ++j){
            if(a[j]>=a[i]){
                int s = 0;
                for(int k = i; k<=j; ++k){
                    s+=a[k];
                }
                t = max(t, s);
                break;
            }
        }
    }
    return t;
}
int dq(int cur, int t){
    if(cur==k){
        return check();
    }
    for(int i = t+1; i<=n; ++i){
        a[i]++;
        kq = max(dq(cur+1, i), kq);
        a[i--];
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    dq(1, 1);
    cout << kq;
    return 0;
}
