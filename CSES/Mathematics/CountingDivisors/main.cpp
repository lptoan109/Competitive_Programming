#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int n, a[MAXN+5];
void sang(){
    for(int i = 1; i<=MAXN; ++i){
        for(int j = i; j<=MAXN; j+=i){
            a[j]++;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sang();
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        cout << a[x] << "\n";
    }
    return 0;
}
