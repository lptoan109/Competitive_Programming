#include <bits/stdc++.h>
using namespace std;
int t;
long long poww(long long a, long long b){

}
bool check(long long so, long long lc, long long rc){
    long long l = 1, long long r = 100, ans;
    while(l<=r){
        long long m = l+(r-l)/2;
        long long solt = poww(so, m);
        if(solt>=lc && solt<=rc){
            ans = m;
            l = m+1;
        }
        else r = m-1;
    }
    return ans;
}
long long binsearchx(long long lc, long long rc){
    long long l = 1, r = rc, ans = -1;
    while(l<=r){
        long long m = l+(r-l)/2, k;
        if(check(m, lc, rc)){
            ans = k;
            r = m-1;
        }
        else l = m+1;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    for(int i = 1; i<=t; ++i){
        long long l, r;
        cin >> l >> r;
        cout << "Case #" << i << ": " << binsearchx(l, r) << "\n";

    }
    return 0;
}
