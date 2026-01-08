#include <bits/stdc++.h>
using namespace std;
int l,r, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> l >> r;
    vector<bool> a(r+1,true);
    a[0] = a[1] = false;
    for(long long i = 2; i*i<=r; ++i){
        if(a[i]){
            for(long long j = i*i; j<=r; j+=i){
                a[j]=false;
            }
        }
    }
    for(long long i = l; i<=r; ++i){
        if(a[i]){
            kq++;
        }
    }
    cout << kq;
    return 0;
}
