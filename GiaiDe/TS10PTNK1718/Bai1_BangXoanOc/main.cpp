#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, kq;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("SPIRAL.INP", "r", stdin);
    freopen("SPIRAL.OUT", "w", stdout);
    cin >> n;
    ll temp = 2*n-2, t = n;
    kq += t;
    while(temp>0){
        t+=temp;
        kq+=t;
        //cout << temp << " ";
        temp-=2;
    }
    //cout << "\n";
    cout << kq;
    return 0;
}
