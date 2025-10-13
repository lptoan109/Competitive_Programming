#include <bits/stdc++.h>
using namespace std;
int a[1000];

int main()
{
    int n, ln = INT_MIN, nn = INT_MAX;
    cin >> n;
    bool dl = true;
    for(int i = 0; i<n; ++i){
        cin >> a[i];
        if(a[i]>ln) ln = a[i];
        if(a[i]<nn) nn = a[i];
    }
    for(int i = n-1; i>0; --i){
        if(nn == a[i]&&dl){
            cout << i << " ";
            dl = false;
        }
    }
    dl = true;
    for(int i = 0;i<n; ++i){
        if(ln == a[i]&&dl){
            cout << i;
            dl = false;
        }
    }
    return 0;
}
