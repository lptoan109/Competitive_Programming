#include <bits/stdc++.h>
using namespace std;
bool check(long so){
    double cb2 = round(sqrt(so));
    return so==cb2*cb2;
}
long long kq, n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(long i = 1; i<=n; ++i){
        if(check(i)){
            kq+=i;
            //cout << i << "\n";
        }
    }
    cout << kq;
    return 0;
}
