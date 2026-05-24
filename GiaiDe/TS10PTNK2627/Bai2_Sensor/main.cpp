#include <bits/stdc++.h>
using namespace std;
const int MAXN = 3e5;
long long n, ps[MAXN+5];
void sub1(){
    long long kq = 0;
    for(int i = 1; i<=n; ++i){
        for(int j = i; j<=n; ++j){
            if((ps[j]-ps[i-1])/j-i+1==j+i) kq++;
        }
    }
    cout << kq;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i =1 ; i<=n; ++i){
        int t;
        cin >> t;
        ps[i] = ps[i-1]+t;
    }
    if(n<=3000){
        sub1();
//        cout << "\n";
//        for(int i = 1; i<=n; ++i) cout << ps[i] << " ";
        return 0;
    }
    return 0;
}
