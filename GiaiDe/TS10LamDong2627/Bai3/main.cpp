#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e7;
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
int n;
vector<int> kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CAU3.INP", "r", stdin);
    freopen("CAU3.OUT", "w", stdout);
    pre();
    cin >> n;
    for(int i = 1; i<=n; ++i){
        int t;
        cin >> t;
        if(!check[t]) kq.push_back(t);
    }
    sort(kq.begin(), kq.end());
    for(int i:kq) cout << i << " ";
    return 0;
}
