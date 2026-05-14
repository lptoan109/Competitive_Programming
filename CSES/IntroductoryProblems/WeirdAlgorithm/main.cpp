#include <bits/stdc++.h>
using namespace std;
long long n;
void solve(){
    if(n%2==0){
        n/=2;
    }
    else n=n*3+1;
    cout << n << " ";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    cout << n << " ";
    if(n==1) return 0;
    do{
        solve();
    }
    while(n!=1);
    return 0;
}
