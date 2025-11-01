#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t1 ,t2;
    for(int i = 0; i<n; ++i){
        cin >> t1 >> t2;
        double kq = sqrt(t1*t1+t2*t2);
        cout << round(kq*100)/100 << " ";
    }
    return 0;
}
