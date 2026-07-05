#include <bits/stdc++.h>
using namespace std;
const int MAXN = 3e6;
int t, pf[MAXN+5];
bool snt[MAXN+5];
bool check(int k){
    int cs = 0;
    while(k>0){
        cs+=(k%10);
        k/=10;
    }
    return cs%5==0;
}
void prepro(){
    snt[0] = snt[1] = true;
    for(int i = 2; i*i<=MAXN; ++i){
        if(!snt[i]){
            for(int j = i*i; j<=MAXN; j+=i) snt[j] = true;
        }
    }
    for(int i = 1; i<=MAXN; ++i){
        if(!snt[i] && check(i)) pf[i]++;
    }
    for(int i = 1; i<=MAXN; ++i){
        pf[i]+=pf[i-1];
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    prepro();
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        cout << pf[r]-pf[l-1] << "\n";
    }
    //for(int i = 1; i<=20; ++i) cout << pf[i] << " ";
    return 0;
}
