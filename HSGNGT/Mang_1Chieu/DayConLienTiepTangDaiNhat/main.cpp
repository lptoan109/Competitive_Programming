#include <bits/stdc++.h>
using namespace std;
int kq[1000];
int main()
{
    int t, n, k=0;
    bool td = true;
    cin >> t;
    for(int i = 1; i<=t; ++i){
        cin >> n;
        int a[n];
        for(int j = 0; j<n; ++j){
            cin >> a[j];
        }
        for(int j = 0; j<n; ++j){
            if(a[j]>a[j-1]&&td){
                d++;
                kq[k++] = j-1;
            }
        }
    }
    return 0;
}
