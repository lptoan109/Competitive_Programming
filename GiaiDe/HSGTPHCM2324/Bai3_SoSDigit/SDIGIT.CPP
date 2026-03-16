#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e6;
ll q, ps[MAXN+5], a[MAXN+5];
vector<pair<ll, ll>> ds;
long long poww(long long a, long long b){
    long long kq = 1;
    for(long long i = 1; i<=b; ++i){
        kq*=a;
    }
    return kq;
}
bool checknt(long long k){
    if(k==2 || k==3) return true;
    if(k<2 || k%2==0 || k%3==0) return false;
    for(long long i = 2; i*i<=k; i+=5){
        if(k%i==0 || k%(i+2)==0) return false;
    }
    return true;
}
long long tcs(long long k){
    ll kq = 0;
    while(k>0){
        kq+=k%10;
        k/=10;
    }
    return kq;
}
long long lt,rt;
void sub1(){
    long long lm = poww(10,lt)/10, rm = poww(10,rt);
    for(ll i = lm; i<rm; ++i){
        bool kt = checknt(tcs(i));
        if(kt){
            a[i]++;
        }
    }
    for(ll i = lm; i<rm; ++i){
        ps[i] = ps[i-1] + a[i];
    }

    for(auto &i:ds){
        long long l = poww(10, i.first)/10, r = poww(10, i.second)-1;
        //cout << l << " " << r << " " << ps[l] << " " << ps[r] << " ";
        cout << ps[r]-ps[l-1] << "\n";
    }
}
int main()
 {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("SDIGIT.INP", "r", stdin);
    freopen("SDIGIT.OUT", "w", stdout);
    cin >> q;
    for(ll i = 0; i<q; ++i){
        ll l,r;
        cin >> l >> r;
        ds.push_back({l,r});
        lt = max(lt, l);
        rt = max(rt,r);
    }
    sub1();
    return 0;
}
