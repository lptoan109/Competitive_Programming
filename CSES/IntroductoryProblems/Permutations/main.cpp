#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    if(n==4){
        cout << "2 4 1 3";
        return 0;
    }
    if(n<5 && n!=1){
        cout << "NO SOLUTION";
        return 0;
    }
    for(int i = 1; i<=n; i+=2) cout << i << " ";
    for(int i = 2; i<=n; i+=2) cout << i << " ";
    return 0;
}
