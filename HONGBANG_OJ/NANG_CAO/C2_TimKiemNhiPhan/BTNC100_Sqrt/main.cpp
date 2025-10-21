#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;
    double n2 = sqrt(n);
    if(n==(ll)n2){
        cout << "Yes\n" << n2 << "\n";
    }
    else{
        cout << "No\n" << (ll)n2 << "\n";
    }
    return 0;
}
