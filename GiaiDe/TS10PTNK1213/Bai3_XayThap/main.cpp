#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
struct dl{
    ll d1;
    ll d2;
    ll val;
};
bool compare(dl a, dl b){
    if(a.d1 == b.d1){
        if(a.d2 == b.d2) return a.val>b.val;
        return a.d2>b.d2;
    }
    return a.d1>b.d1;
}
const int MAXN = 100;
ll n, kqv;;
dl a[MAXN+5];
vector<dl> kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("XAYTHAP.INP", "r", stdin);
    freopen("XAYTHAP.OUT", "w", stdout);
    cin >> n;
    for(ll i = 1; i<=n; ++i){
        ll d, r, v;
        cin >> d >> r >> v;
        a[i].d1 = max(d,r);
        a[i].d2 = min(d,r);
        a[i].val = v;
    }
    sort(a+1, a+1+n, compare);
    kq.push_back(a[1]);
    kqv = a[1].val;
    for(ll i = 2; i<=n; ++i){
        dl t = kq.back();
        if(a[i].d1<=t.d1 && a[i].d2<=t.d2){
            kq.push_back(a[i]);
            kqv+=a[i].val;
        }
    }
//    for(dl i:kq){
//        cout << i.d1 << " " << i.d2 << " " << i.val << "\n";
//    }
    cout << kqv;
    return 0;
}
