#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    if(n%2!=0) n--;
    for(int i = n; i>=2; i-=2){
        cout << i << " ";
    }
    return 0;
}
