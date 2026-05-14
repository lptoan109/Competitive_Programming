#include <bits/stdc++.h>
using namespace std;
long long k;
namespace sub1{
    string tos(int t){
        string kq = "";
        while(t>0){
            int cs = t%10;
            kq+=(cs+'0');
            t/=10;
        }
        reverse(kq.begin(), kq.end());
        return kq;
    }
    string s;;
    void solve(){
        for(int i = 1; i<=k; ++i){
            s+=(tos(i));
        }
        //cout << s << "\n";
        for(int i = k-1; i<k+3; ++i){
            cout << s[i];
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("PASSWORD.INP", "r", stdin);
    freopen("PASSWORD.OUT", "w", stdout);
    cin >> k;
    if(k<=1000000){
        sub1::solve();
        return 0;
    }
    return 0;
}
