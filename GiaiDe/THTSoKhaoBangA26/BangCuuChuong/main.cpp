#include <bits/stdc++.h>
using namespace std;
int x;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> x;
    for(int i = 1; i<=9; ++i){
        for(int j = 1; j<=9; ++j){
            if(i*j==x){
                cout << i;
                return 0;
            }
        }
    }
    cout << 0;
    return 0;
}
