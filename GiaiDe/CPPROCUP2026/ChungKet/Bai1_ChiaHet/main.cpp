#include <bits/stdc++.h>
using namespace std;
int n, x, sd;
bool check(int sd){
    sd = (sd*10+x)%n;
    return sd==0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("NHAP.INP", "r", stdin);
    cin >> n >> x;
    int d = 1, cnt = 0;
    while(!check(d)){
        if(cnt>=10000000){
            cout << -1;
            return 0;
        }
        cnt++;
        d++;
    }
    for(int i = 1; i<=d; ++i){
        cout << x;
    }
    return 0;
}
