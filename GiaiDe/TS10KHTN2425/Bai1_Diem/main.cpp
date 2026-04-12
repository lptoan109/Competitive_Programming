#include <bits/stdc++.h>
using namespace std;
int n;
long long maxx = -1e18, minn = 1e18;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        long long t1,t2;
        cin >> t1 >> t2;
        maxx = max(maxx, t1+t2);
        minn = min(minn, t1+t2);
    }
    cout << maxx-minn;
    return 0;
}
