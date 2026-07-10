#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5, m = 23;
int n, a[MAXN+5];
long long kq;
map<int, vector<int>> cnt;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    for(int i = 1; i<=n; ++i){
        // b%m =(a%m+m)%m
        if(i>5){
            vector<int> t = cnt[(a[i]%m+m)%m];
            for(int j:t){
                if(i>j-5) break;
                kq++;
            }
        }
        cnt[a[i]%m].push_back(i);
    }
    cout << kq;
    return 0;
}
