#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e8;
int a, b;
bool check[MAXN+5];
void sang(){
    check[0] = check[1] = true;
    for(int i = 2; i*i<=b; ++i){
        if(!check[i]){
            for(int j = i*i; j<=b; j+=i){
                check[j] = true;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b;
    sang();
    for(int i = a+1; i<b; ++i){
        if(!check[i]) cout << i << " ";
    }
    return 0;
}
