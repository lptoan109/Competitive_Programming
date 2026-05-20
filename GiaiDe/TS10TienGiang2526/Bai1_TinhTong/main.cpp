#include <bits/stdc++.h>
using namespace std;
long long n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    if(n==1){
        cout << 1;
        return 0;
    }
    if(n==2){
        cout << 2;
        return 0;
    }
    if(n%2!=0){
        cout << ((n-(long long)n/2)*(1+n))/2;
        return 0;
    }
    else{
        cout << ((n/2)*(2+n))/2;
        return 0;
    }
    return 0;
}
