#include <bits/stdc++.h>
using namespace std;
int n;
double kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i =1 ; i<=n; ++i){
        double t;
        cin >> t;
        kq+=t;
    }
    cout << fixed << setprecision(3) << round((kq/n)*1000.0)/1000.0;
    return 0;
}
