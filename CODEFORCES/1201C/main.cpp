#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5;
int a[MAXN+5];
int bin(int l, int r, int k){
    int ans = -1;
    while(l<=r){
        int m = l+(r-l)/2;
        if(a[m]>k){
            ans = m;
            r = m-1;
        }
        else{
            l = m+1;
        }
    }
    return ans;
}
int bin1(int l, int r){
    int ans = l, nn = a[l];
    while(l<=r){
        int m = l+(r-l)/2;
        if(a[m]<nn){
            ans = m;
            nn = a[ans];
            r = m-1;
        }
        else l = m+1;
    }
    return ans;
}
int n, k;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for(int i = 1; i<=n; ++i){
        cin >>a[i];
    }
    if(n==1){
        cout << a[1]+k;
        return 0;
    }
    sort(a+1, a+1+n);
    while(k>0){
        int t = bin1(n/2+1, n);
        int vt = bin(1, n, a[t]);
        if(vt==-1){
            if(k==n/2+1){
                cout << a[t]+1;
                return 0;
            }
            else if(k<n/2+1){
                cout << a[t];
                return 0;
            }
            else{
                int kqt = a[t];
                const int hs = n/2+1;
                while(k-hs>0){
                    k-=hs;
                    kqt++;
                }
                cout << kqt;
                return 0;
            }
        }
        k-=(a[vt]-a[t]);
        a[t] += (a[vt]-a[t]);
    }
    sort(a+1, a+1+n);
    cout << a[n/2+1];
    return 0;
}
