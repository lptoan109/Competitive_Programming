#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int n,k,maxx=INT_MIN, minn=INT_MAX, a[MAXN], kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BAI17.INP", "r", stdin);
    cin >> n >> k;
    for(int i = 0; i<n; ++i){
        cin >> a[i];
    }
    int l,r, cl = 0;
    l = r = 0;
    for(r=0; r<n; ++r){
        maxx=max(maxx,a[r]);
        minn=min(minn,a[r]);
        cl = maxx-minn;
        while(cl>k&&l<=r){
            l++;
            maxx=max(maxx,a[l]);
            minn=min(minn,a[l]);
            cl = maxx-minn;
        }
        if(cl<=k){
            kq = max(kq,r-l+1);
            cout << kq << " : " << cl << " ";
            for(int i = l; i<=r; ++i){
                cout << a[i] << " ";
            }
            cout << "\n";
        }
    }
    cout << kq;
    return 0;
}
