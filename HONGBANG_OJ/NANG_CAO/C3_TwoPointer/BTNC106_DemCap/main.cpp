#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e7;
int n,k, a[MAXN+5], d =0;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> k;
    for(int i = 0; i<n; ++i) cin >> a[i];
    sort(a,a+n);
    int r=n-1,l=0;
    while(l<=r){
        if(a[l]+a[r]==k){
            d++;
            l++;
            r--;
        }
        else if(a[l]+a[r]<k) l++;
        else r--;
    }
    cout << d;
}
