#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector <int> a,b;
int n,ms,t,vt=-1,d=0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("SINHNHAT.INP","r", stdin);
    freopen("SINHNHAT.OUT","w", stdout);
    cin >> n >> ms;
    for(int i = 0; i<n; ++i){
        cin >> t;
        a.push_back(t);
    }
    sort(a.begin(),a.end());
    for(int i = 0; i<ms; ++i){
        cin >> t;
        b.push_back(t);
    }
    sort(b.begin(),b.end());
    for(int i = 0; i<n; ++i){
        if(b.size()>1){
            int l = 0, r = ms-1;
            while(l<=r){
                int m=l+(r-l)/2;
                if(b[m]==a[i]){
                    vt=m;
                    r=m-1;
                }
                else if(b[m]<a[i]) r=m-1;
                else l=m+1;
            }
            b.erase(b.begin()+(vt-1));
            b.erase(b.begin()+(vt+1));
            d++;
        }
        else break;
    }
    cout << d;
    return 0;
}
