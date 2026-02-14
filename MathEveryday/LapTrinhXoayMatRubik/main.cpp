#include <bits/stdc++.h>
using namespace std;
char a[4][4];
int k;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> k;
    for(int i = 1; i<=3; ++i){
        for(int j = 1; j<=3; ++j){
            cin >> a[i][j];
        }
    }
    int t = k/4, cl = k-4*t;
    if(cl == 0){
        for(int i = 1; i<=3; ++i){
            for(int j = 1; j<=3; ++j) cout << a[i][j];
        }
        return 0;
    }
    if(cl == 1){
        char kq[4][4];
        for(int i = 1; i<=3; ++i){
            if(i==1){
                for(int j = 1; j<=3; ++j) kq[i][j]
            }
        }
        return 0;
    }
    return 0;
}
