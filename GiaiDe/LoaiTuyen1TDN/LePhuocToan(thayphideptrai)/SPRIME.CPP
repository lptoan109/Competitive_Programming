#include <bits/stdc++.h>
using namespace std;
const int MAXN = 3e6;
bool check[MAXN+5];
int pf[MAXN+5];
bool ch(int k){
    int t = 0;
    while(k>0){
        t+=(k%10);
        k/=10;
    }
    return t%5==0;
}
void pre(){
    check[0] = check[1] = true;
    for(int i = 2; i*i<=MAXN; ++i){
        if(!check[i]){
            for(int j = i*i; j<=MAXN; j+=i) check[j] = true;
        }
    }
    for(int i = 1; i<=MAXN; ++i){
        if(!check[i]){
            if(ch(i)) pf[i]++;
        }
    }
    for(int i =1 ; i<=MAXN; ++i) pf[i] += pf[i-1];
}
int q;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("SPRIME.INP", "r", stdin);
    freopen("SPRIME.OUT", "w", stdout);
    cin >> q;
    pre();
    while(q--){
        int l, r;
        cin >> l >> r;
        cout << pf[r]-pf[l-1] << "\n";
    }
    return 0;
}
