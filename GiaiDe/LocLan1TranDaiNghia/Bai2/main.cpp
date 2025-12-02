#include <bits/stdc++.h>
using namespace std;
long long n,t;
set <long long>kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> t;
        kq.insert(t);
    }
    for(auto &i:kq) cout << i << " ";
    return 0;
}
