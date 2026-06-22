#include <bits/stdc++.h>
using namespace std;
int n, k, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    int cnt = 0;
    while(n>0){
        kq++;
        n--;
        cnt++;
        if(cnt == k){
            n++;
            cnt = 0;
        }
    }
    cout << kq;
    return 0;
}
