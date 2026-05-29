#include <bits/stdc++.h>
using namespace std;
bool check(int so){
    int t = floor(sqrt(so));
    return t*t==so;
}
int n, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i =1 ; i<=n; ++i){
        int so;
        cin >> so;
        if(check(so)) kq++;
    }
    cout << kq;
    return 0;
}
