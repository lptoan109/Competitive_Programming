#include <bits/stdc++.h>
using namespace std;
const int MAXX = 1e6;
int cnt[MAXX+5];
void pre(){
    for(int i = 1; i<=MAXX; ++i){
        for(int j = i; j<=MAXX; j+=i){
            cnt[j]++;
        }
    }
}
int n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    pre();
    cin >> n;
    for(int i =1 ; i<=n; ++i){
        int t;
        cin >> t;
        cout << cnt[t] << "\n";
    }
    return 0;
}
