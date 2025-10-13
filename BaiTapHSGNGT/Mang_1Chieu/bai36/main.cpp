#include <bits/stdc++.h>
using namespace std;
int a[1000];
int main()
{
    int n, ln = INT_MIN, nn = INT_MAX;
    cin >> n;
    for(int i = 0; i<n; ++i){
        cin >> a[i];
        if(a[i]>ln) ln = a[i];
        if(a[i]<nn) nn = a[i];
    }
    cout << nn << "\n";
    for(int i = 0; i<n; ++i){
        if(nn == a[i]) cout << i << " ";
    }
    cout<< "\n" << ln << "\n";
    for(int i = n-1; i>0; --i){
        if(ln == a[i]) cout << i << " ";
    }
    return 0;
}
