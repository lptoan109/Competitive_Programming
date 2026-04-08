#include <bits/stdc++.h>
using namespace std;
int t1, t2;
void coquaynga(int n){
    for(int i = 1; i<=n; ++i){
        int vt1 = rand()%6+1;
        int vt2 = rand()%6+1;
        while(vt2==vt1){
            vt2 = rand()%6+1;
        }
        for(int j = 1; j<=6; ++j){
            if(j==vt1 || j==vt2){
                if(j%2!=0){
                    cout << "Lan " << i << ": Nguoi chet la T1" << "\n";
                    t1++;
                    break;
                }
                else{
                    cout << "Lan " << i << ": Nguoi chet la T2" << "\n";
                    t2++;
                    break;
                }
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("COQUAYNGA.OUT", "w", stdout);
    srand(time(0));
    coquaynga(10000);
    cout << "Tong so ket qua ma T1 chet la: " <<  t1 << "\n";
    cout << "Tong so ket qua ma T2 chet la: " <<  t2 << "\n";
    return 0;
}
