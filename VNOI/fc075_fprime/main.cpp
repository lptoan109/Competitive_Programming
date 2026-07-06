#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e7;
bool check[MAXN+5];
void pre(){
    check[0] = check[1] = true;
    for(int i = 2; i*i<=MAXN; ++i){
        if(!check[i]){
            for(int j = i*i; j<=MAXN; j+=i) check[j] = true;
        }
    }
}
int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    pre();
    while(t--){
        int n;
        cin >> n;
        if(!check[n]) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
