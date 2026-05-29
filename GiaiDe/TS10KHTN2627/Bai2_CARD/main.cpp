#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int n, kq, a[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i =1; i<=n; ++i){
        cin >> a[i];
    }
    kq = a[1];
    for(int i = 2; i<=n; ++i){
        if(a[i]>kq){
            kq = a[i];
        }
        else if(a[i]==kq){
            kq = a[i+1];
            i++;
        }
        //cout << kq << "\n";
    }
    cout << kq;
    return 0;
}
