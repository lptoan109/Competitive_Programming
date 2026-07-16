#include <bits/stdc++.h>
using namespace std;
const int MAXN = 3000;
bool check[MAXN+5];
int n, kq;
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
    cin >> n;
    for(int i = 1; i<=n; ++i){
        int cnt = 0;
        for(int j = 1; j*j<=i; ++j){
            if(i%j==0){
                if(!check[j]) cnt++;
                if(j!=i/j && !check[i/j]) cnt++;
            }
        }
        if(cnt==2) kq++;
    }
    cout << kq;
    return 0;
}
