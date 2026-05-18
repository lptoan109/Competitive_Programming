#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e7;
int a[MAXN+5], n;
//bool check[MAXN+5];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("UNT.INP", "r", stdin);
    freopen("UNT.OUT", "w", stdout);
    cin >> n;
//    for(int i = 2; i*i<=n; ++i){
//        if(!check[i]){
//            for(int j = i*i; j<=n; j+=i){
//                check[j] = true;
//            }
//        }
//    }
    for(int i = 2; i<=n; ++i){
        if(a[i]==0){
            for(int j = i+i; j<=n; j+=i){
                a[j]++;
            }
        }
    }
    for(int i = 2; i<=n; ++i){
        if(a[i]>0) cout << a[i] << " ";
    }
    return 0;
}
