#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int n,x, kq=0;
vector <long long> a;
int main()
{
    cin >> n >> x;
    for(int i = 1; i<=n; ++i){
        int t;
        cin >> t;
        a.push_back(t);
    }
    sort(a.begin(), a.end());

    cout << kq;
    return 0;
}
