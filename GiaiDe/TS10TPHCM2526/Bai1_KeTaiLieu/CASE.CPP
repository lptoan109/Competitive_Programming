#include <bits/stdc++.h>
using namespace std;
long long p;
void sub1(){
    long long t = 1, h = 1;
    while(p-t>0){
        //cout << h << " " << t << "\n";
        t+=h;
        h++;
    }
    t=(t-h)+1;
    h--;
    long long c = 0;
    c = p-t+1;
    cout << h << " " << c;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CASE.INP", "r", stdin);
    freopen("CASE.OUT", "w", stdout);
    cin >> p;
    sub1();
    return 0;
}
