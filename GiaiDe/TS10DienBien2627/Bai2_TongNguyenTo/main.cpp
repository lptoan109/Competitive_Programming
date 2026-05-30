#include <bits/stdc++.h>
using namespace std;
int t;
const int MAXN = 1e6;
bool check[MAXN+5];
long long pf[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int i = 2; i*i<=MAXN; ++i){
        if(!check[i]){
            for(int j = i*i; j<=MAXN; j+=i){
                check[j] = true;
            }
        }
    }
    check[0] = check[1] = true;
    for(int i = 1; i<=MAXN; ++i){
        if(!check[i]) pf[i]+=i;
        pf[i]+=pf[i-1];
    }
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        cout << pf[r]-pf[l-1] << "\n";
    }
    return 0;
}
