#include <bits/stdc++.h>
using namespace std;
const int MAXN = 24;
#define ll long long
ll n, b, kq;
pair<ll, ll> a[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("SURVEY.INP", "r", stdin);
    freopen("SURVEY.OUT", "w", stdout);
    cin >> n >> b;
    for(int i = 0; i<n; ++i){
        ll v1, v2;
        cin >> v1 >> v2;
        a[i] = {v1, v2};
    }
    ll limit = (1ULL<<n);
    for(int i = 1; i<limit; ++i){
        ll t = i, pos = 0;
        ll s1 = 0, s2 = 0;
        //vector<int> temp;
        while(t>0){
            if(t&1){
                s1+=a[pos].first;
                s2 +=a[pos].second;
                //temp.push_back(pos);
            }
            pos++;
            t>>=1;
        }
        if(s1<=b){
//            if(kq<s2){
//                kq = s2;
//                for(int k:temp) cout << k << " ";
//                cout << ": " << kq << "\n";
//            }
            kq = max(kq, s2);
        }
    }
    cout << kq;
    return 0;
}
