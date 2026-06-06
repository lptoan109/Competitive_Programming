#include <bits/stdc++.h>
using namespace std;
int n, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    while(n--){
        int cnt = 0;
        for(int i = 1; i<=3; ++i){
            int so;
            cin >> so;
            cnt+=so;
        }
        if(cnt>=2) kq++;
    }
    cout << kq;
    return 0;
}
