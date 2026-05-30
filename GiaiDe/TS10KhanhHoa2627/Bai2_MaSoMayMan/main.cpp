#include <bits/stdc++.h>
using namespace std;
int n, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i =1 ; i<=n; ++i){
        long long so;
        cin >> so;
        if(so%2026==0) kq++;
    }
    cout << kq;
    return 0;
}
