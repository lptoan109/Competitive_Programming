#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("HTBV.INP", "r", stdin);
    freopen("HTBV.OUT", "w", stdout);
    int n;
    while(cin >> n){
        double R = n - 0.5, R2 = R * R;
        long long trong = 0,cham = 0;
        for(int x = 1; x <= n; ++x){
            for(int y = 1; y <= n; ++y){
                double xa = 1.0 * x * x + 1.0 * y * y;
                double gan=1.0*(x-1)*(x-1)+1.0*(y-1)*(y-1);
                if(xa<=R2){
                    trong++;
                }
                else if(gan<R2){
                    cham++;
                }
            }
        }
        cout << cham * 4 << " "<< trong * 4 << "\n";
    }
    return 0;
}
