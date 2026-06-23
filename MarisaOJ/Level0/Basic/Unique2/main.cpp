#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n, a[MAXN+5];
vector<int> kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i =1 ; i<=n; ++i) cin >> a[i];
    sort(a+1, a+1+n);
    kq.push_back(a[1]);
    for(int i = 2; i<=n; ++i){
        if(a[i]!=a[i-1]) kq.push_back(a[i]);
    }
    for(int i:kq) cout << i << " ";
    return 0;
}
