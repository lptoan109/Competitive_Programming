#include <bits/stdc++.h>
using namespace std;
bool checkcp(long long k) {
    if(k<0) return false;
    int h =k&0xF;
    if(h>9) return false;
    if(h!=0 && h!=1 && h!=4 && h!=9) return false;
    long long root = round(sqrt(k));
    return root*root== k;
}
int check(long long k){
    for(int i = 2; i*i<=k; ++i){
        if(k%(i*i)==0) return true;
    }
    return false;
}
int l, r, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DSQUARE.INP", "r", stdin);
    freopen("DSQUARE.OUT", "w", stdout);
    cin >> l >> r;
    for(int i = l; i<r; ++i){
        for(int j = i+1; j<=r; ++j){
            if(check(i*j)){
                kq++;
                //cout << i  << " " << j << "\n";
            }
        }
    }
    //cout << "\n";
    cout << kq;
    return 0;
}
