#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int phi[MAXN+5], n, t;
void pre(){
    for(int i = 1; i<=MAXN; ++i) phi[i] = i;
    for(int i = 2; i<=MAXN; ++i){
        if(phi[i] == i){
            for(int j = i; j<=MAXN; j+=i){
                phi[j] -= phi[j]/i;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    pre();
    cin >> t;
    while(t--){
        cin >> n;
        cout << phi[n] << "\n";
    }
    return 0;
}
