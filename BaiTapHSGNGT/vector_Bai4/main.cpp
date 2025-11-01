#include <bits/stdc++.h>
using namespace std;
vector <int>a;
int main()
{
    int n, l ,r,t;
    cin >> n;
    for(int i = 0; i<n; ++i){
        cin>>t;
        a.push_back(t);
    }
    cin >> l >> r;
    for(int i = l; i<=r; ++i){
        cout << a[i] << " ";
    }
    cout << "\n";
    for(int i = r; i>=l; --i){
        cout << a[i] << " ";
    }
    return 0;
}
