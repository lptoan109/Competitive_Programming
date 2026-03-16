#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,a,b,c,d;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("ROBOT.INP", "r", stdin);
    freopen("ROBOT.OUT", "w", stdout);
    cin >> n >> a >> b >> c >> d;
    n--;
    if((n%a==0 || n%b==0) && (n%c==0 || n%d==0)){
        long long n1,n2,d1,d2;
        n1 = n2 = d1 = d2 = 1e18;
        if(n%a==0) n1 = n/a;
        if(n%b==0) n2 = n/b;
        if(n%c==0) d1 = n/c;
        if(n%d==0) d2 = n/d;
        cout << min(n1,n2)+min(d1,d2);
    }
    else{
        cout << -1;
    }
    return 0;
}
