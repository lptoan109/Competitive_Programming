#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e6;
int n;
bool notprimes[MAXN+1];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    if(n<2){
        return 0;
    }
    for(int i = 2; i*i<=n; ++i){
        if(!notprimes[i]){
            for(int j = i*i; j<=n; j+=i){
                notprimes[j]=true;
            }
        }
    }
    for(int i = 2; i<=n; ++i){
        if(!notprimes[i]) cout << i << " ";
    }
    return 0;
}
