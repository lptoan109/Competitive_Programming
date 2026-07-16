#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
bool check[MAXN+5];
int n, kq[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    check[0] = check[1] = true;
    for(int i = 2; i*i<=MAXN; ++i){
        if(!check[i]){
            for(int j = i*i; j<=MAXN; j+=i){
                check[j] = true;
            }
        }
    }
    cin >> n;
    n++;
    for(int i =2 ; i<=n; ++i){
        kq[i] = 1;
    }
    for(int i = 2; i<=n; ++i){
        if(!check[i]){
            int t = 2;
            for(int j = 2*i; j<=n; j+=i){
                kq[j] = 2;
            }
        }
    }
    if(n-1>2) cout << 2 << "\n";
    else{
        cout << 1 << "\n";
    }
    for(int i = 2; i<=n; ++i) cout << kq[i] << " ";
    return 0;
}
