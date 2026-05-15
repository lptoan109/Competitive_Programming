#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e8;
bool check[MAXN+5];
int a, b, kq;
bool checksnt(int k){
    int t = 0;
    while(k>0){
        int cs = k%10;
        if(check[cs]) return false;
        t+=cs;
        k/=10;
    }
    if(check[t]) return false;
    else return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BAI2.INP", "r", stdin);
    freopen("BAI2.OUT", "w", stdout);
    cin >> a >> b;
    check[0] = check[1] = true;
    for(int i = 2; i*i<=b; ++i){
        if(!check[i]){
            for(int j = i*i; j<=b; j+=i){
                check[j] = true;
            }
        }
    }
    for(int i = a; i<=b; ++i){
        if(!check[i]){
            if(checksnt(i)) cout << i << " ";
        }
    }
    return 0;
}
