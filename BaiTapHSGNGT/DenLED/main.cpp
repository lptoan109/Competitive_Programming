#include <bits/stdc++.h>
using namespace std;
int n, kq = 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("ledlight.INP", "r", stdin);
    freopen("ledlight.OUT", "w", stdout);
    cin >> n;
    while(n>0){
        if(n-5>0){
            n-=3;
            kq+=7;
        }
        else{
            if(n==5){
                n-=3-2;
                kq+=7+1;
            }
            else if(n==4){
                n-=4;
                kq+=4;
            }
            else if(n==3){
                n-=3;
                kq+=7;
            }
            else if(n==2){
                n-=1;
                kq+=1;
            }
        }
    }
    cout << kq;
    return 0;
}
