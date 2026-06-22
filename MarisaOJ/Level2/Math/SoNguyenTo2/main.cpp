#include <bits/stdc++.h>
using namespace std;
long long n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    if(n==2||n==3){
        cout << "YES";
        return 0;
    }
    if(n<2||n%2==0||n%3==0){
        cout << "NO";
        return 0;
    }
    for(long long i = 5; i*i<=n; i+=6){
        if(n%i==0||n%(i+2)==0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
