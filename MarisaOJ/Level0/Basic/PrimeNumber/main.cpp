#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin >> n;
    if(n<2){
        cout << "NO";
        return 0;
    }
    for(int i = 2; i<n; ++i){
        if(n%i==0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
