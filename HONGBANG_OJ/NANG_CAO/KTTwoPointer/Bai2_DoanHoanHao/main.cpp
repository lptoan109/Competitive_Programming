#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e7;
int a[MAXN+5], k, n;
unordered_map <int , int> md;
int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);
    freopen("PERFECT.INP", "r", stdin);
    //freopen("PERFECT.OUT", "w", stdout);
    cin >> n >> k;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    int l = 1;
    int d = 0;
    int kql = 1, kqr = 1;
    for(int r = 1; r <= n; ++r) {
        md[a[r]]++;
        while (md.size() > k) {
            md[a[l]]--;
            if(md[a[l]] == 0) {
                md.erase(a[l]);
            }
            l++;
        }
        int dt = r - l + 1;
        if(dt > d){
            d = dt;
            kql = l;
            kqr = r;
        }
    }
    cout << kql << " " << kqr;
    return 0;
}
