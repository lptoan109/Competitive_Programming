#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e7;
int t, pf[MAXN+5];
bool check[MAXN+5];
vector<int> a;
bool bs(int l, int r, int k){
    while(l<=r){
        int m = l+(r-l)/2;
        if(a[m] == k) return true;
        else if(a[m]<k) l = m+1;
        else r = m-1;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    check[0] = check[1] = true;
    for(int i = 2; i*i<=MAXN; ++i){
        if(!check[i]){
            for(int j = i*i; j<=MAXN; j+=i){
                check[j] = true;
            }
        }
    }
    for(int i = 2; i<=MAXN; ++i){
        if(!check[i]){
            a.push_back(i);
        }
    }
    cin >> t;
    int n = a.size();
    for(int i = 1; i<n-1; ++i){
        if(bs(0,i-1, 2*a[i]-a[i+1])) pf[i]++;
    }
    //for(int i = 1; i<=MAXN; ++i) pf[i]+=pf[i-1];
    while(t--){
        int l, r;
        cin >> l >> r;
        cout << pf[r] - pf[l-1] << "\n";
    }
    cout << pf[7] << " " << pf[11];
    return 0;
}
