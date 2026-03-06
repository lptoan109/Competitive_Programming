#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MAXN = 1e6;
ll n, a[MAXN+5], kq;
vector <ll> vkq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("FROG.INP", "r", stdin);
    freopen("FROG.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    ll vt = 0;
    if(a[1]<a[2]){
        kq = a[1];
        vt = 1;
    }
    else{
        kq = a[2];
        vt = 2;
    }
    vkq.push_back(vt);
    while(vt<=n){
        if(vt+2>n){
            vkq.push_back(vt+1);
            kq = abs(kq-a[vt+1]);
            break;
        }
        if(a[vt+1]<a[vt+2]){
            vkq.push_back(vt+1);
            kq = abs(kq-a[vt+1]);
            vt+=1;
        }
        else{
            vkq.push_back(vt+2);
            kq = abs(kq-a[vt+2]);
            vt +=2;
        }
    }
    cout << kq << "\n";
    for(ll i:vkq){
        cout << i << " ";
    }
    return 0;
}
