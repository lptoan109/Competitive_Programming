#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5;
bool check[MAXN+5];
void pre(){
    check[0] = check[1] = true;
    for(int i = 2; i*i<=MAXN; ++i){
        if(!check[i]){
            for(int j = i*i; j<=MAXN; j+=i){
                check[j] = true;
            }
        }
    }
}
int a, b;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    pre();
    cin >> a >> b;
    for(int i = a; i<=b; ++i){
        if(!check[i]) cout << i << "\n";
    }
    return 0;
}
