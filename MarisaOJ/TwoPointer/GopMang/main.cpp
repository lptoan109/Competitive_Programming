#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
long long n, a[MAXN],b[MAXN], d = 1;
vector <long long>c;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("input.INP", "r", stdin);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin>>a[i];
        c.push_back(a[i]);
    }
    for(int i = 1; i<=n; ++i){
        cin>>b[i];
        c.push_back(b[i]);
    }
    sort(c.begin(), c.end());
    for(auto &i:c) cout << i << " ";

    return 0;
}
