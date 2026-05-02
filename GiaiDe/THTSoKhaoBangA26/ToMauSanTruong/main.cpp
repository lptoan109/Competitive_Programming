#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, kq;
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    int temp = n;
    for(int i = 1; i<=n; i+=3){
        if(i!=1) kq+=temp*2;
        else kq+=temp;
        temp-=3;
    }
    cout << kq;
    return 0;
}
