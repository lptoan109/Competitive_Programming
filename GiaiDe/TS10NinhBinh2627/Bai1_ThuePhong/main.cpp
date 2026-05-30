#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    if(n%3==0){
        cout << n/3;
    }
    else cout << n/3+1;
    return 0;
}
