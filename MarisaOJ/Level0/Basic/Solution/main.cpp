#include <bits/stdc++.h>
using namespace std;
int n, kq;
int main()
{
    cin >> n;
    for(int i = 1; i<n-2; ++i){
        for(int j = i+1; j<n-1; ++j){
            for(int k = j+1; k<n; ++k){
                if(n-(i+j+k)>k && n-(i+j+k)<=n) kq++;
            }
        }
    }
    cout << kq;
    return 0;
}
