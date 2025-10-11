#include <bits/stdc++.h>
using namespace std;

void vehinhvuong(int n){
    if(n==1) cout << '*';
    else{
        for(int i = 1; i<=n; ++i){
            cout << "* ";
        }
        cout << "\n";
        for(int i = 2; i<n; ++i){
            for(int j=1; j<=n; ++j){
                if(j==1) cout << "* ";
                    else if(j==n) cout << "*";
                        else cout << "  ";
            }
            cout << "\n";
        }
        for(int i = 1; i<=n; ++i){
            cout << "* ";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vehinhvuong(n);
    return 0;
}
