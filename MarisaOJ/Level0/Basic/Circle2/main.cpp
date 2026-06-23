#include <bits/stdc++.h>
using namespace std;
int n,x,y, a[1005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    cin >> x >> y;
    int t1 = 0, t2 = 0;
    for(int i = min(x, y); i<max(x,y); ++i){
        //cout << i << " ";
        t1+=a[i];
    }
    cout << "\n\n";
    for(int i = max(x, y); i<max(x, y)+(n-max(x,y))+min(x, y); ++i){
        t2+=a[i%n==0?n:i%n];
        //cout << i << " ";
    }
    //cout << "\n";
    cout << min(t1, t2);
    return 0;
}
