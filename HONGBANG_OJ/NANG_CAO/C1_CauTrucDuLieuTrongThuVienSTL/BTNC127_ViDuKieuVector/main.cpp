#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<pair<ll,ll>> ds;

void nhap(ll &d){
    string n;
    d=0;
    while(getline(cin,n)){
        ll so1,so2;
        stringstream t(n);
        t>>so1; t>>so2;
        ds.push_back(make_pair(so1,so2));
        d++;
    }
}
void bssua(ll d){
    ll sbdbs = ds[d-1].first, diembs = ds[d-1].second;
    ds.pop_back();
    ll sbds = ds[d-1].first, diems = ds[d-1].second;
    ds.pop_back();
    ds.insert(ds.begin(),make_pair(sbdbs,diembs));
    for(auto i:ds){
        if(i.first==sbds){
            i.second = diems;
            break;
        }
    }
}
void xephang(ll d){
    for (auto it = ds.begin(); it != ds.end(); ) {
    if (it->second < 20)
        it = ds.erase(it); // xóa và cập nhật iterator
    else
        ++it;
}
    for(auto i:ds){
        cout << i.first << " " << i.second << "\n";
    }
    sort(ds.begin(), ds.end(), [](pair<ll, ll> a, pair<ll, ll> b) {
        return a.second > b.second;
    });
    ll i = 0, de=ds.size;
    cout << "\n";
    while(i<10||de>0){
        cout << ds[i].first << " " << ds[i].second << "\n";
        i++;
        de--;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BTNC127.INP", "r", stdin);
    freopen("BTNC127.OUT", "w", stdout);
    ll d;
    nhap(d);
    bssua(d);
    xephang(d);
    return 0;
}
