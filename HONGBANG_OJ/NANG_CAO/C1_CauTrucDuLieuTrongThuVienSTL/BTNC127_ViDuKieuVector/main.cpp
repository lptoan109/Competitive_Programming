#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dou double
#define fi first
#define se second
vector<pair<dou,dou>> ds, kq;
ll d;
void nhap(ll &d){
    string n;
    d=0;
    while(getline(cin,n)){
        dou so1,so2;
        stringstream t(n);
        t>>so1; t>>so2;
        ds.push_back(make_pair(so1,so2));
        ++d;
    }
}
void bssua(ll d){
    ds.insert(ds.begin()+0, make_pair(ds[d-1].fi, ds[d-1].se));
    ds.pop_back();
    for(int i = 0; i<d; ++i){
        if(ds[i].fi == ds[d-1].fi){
            ds[i].se = ds[d-1].se;
            break;
        }
    }
    ds.pop_back();
    d-=1;
    for(int i = 0; i<d; ++i){
        if(ds[i].se >=20){
            kq.push_back(make_pair(ds[i].fi, ds[i].se));
            cout << ds[i].fi << " " << ds[i].se << "\n";
        }
    }
}
bool qtsort(pair<dou,dou> a, pair<dou,dou> b){
    return a.se > b.se;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BTNC127.INP", "r", stdin);
    //freopen("BTNC127.OUT", "w", stdout);
    nhap(d);
    bssua(d);
    sort(kq.begin()+0, kq.end(), qtsort);
    cout << "\n";
    ll i = 0;
    d = kq.size();
    while(d>0){
        if(i==10) break;
        else{
            cout << kq[i].fi << " " << kq[i].se << "\n";
            d-=1;
            i++;
        }
    }
    return 0;
}
