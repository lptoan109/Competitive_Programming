#include <bits/stdc++.h>
using namespace std;
int n;
map<int, int> a;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n;++i){
        int t;
        cin >> t;
        a[t]++;
    }
    cout << a.size();
    return 0;
}
