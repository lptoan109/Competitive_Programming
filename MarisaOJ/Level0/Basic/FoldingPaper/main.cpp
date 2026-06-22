#include <bits/stdc++.h>
using namespace std;
long long n, t = 1;
int cnt;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    while(t<n){
        cnt++;
        t*=2;
    }
    cout << cnt;
    return 0;
}
