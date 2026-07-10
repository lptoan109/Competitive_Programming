#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e7;
bool check[MAXN+5];
int pf[MAXN+5];
void pre(){
    check[0] = check[1] = true;
    for(int i = 2; i*i<=MAXN; ++i){
        if(!check[i]){
            for(int j = i*i; j<=MAXN; j+=i){
                check[j] = true;
            }
        }
    }
    for(int i = 1; i<=MAXN; ++i){
        if(!check[i]) pf[i] = pf[i-1]+1;
        else pf[i] = pf[i-1];
    }
}
int binsearch(int l, int r, int k){
    int temp = -1;
    while(l<=r){
        int m = l+(r-l)/2;
        if(pf[m]<=k){
            temp = m;
            r = m-1;
        }
        else l = m+1;
    }
    return temp;
}
int n, k;
map<int, int> cnt;
long long kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    pre();
    cin >> n >> k;
    for(int i = 1; i<=n; ++i){
        //pf[r] - pf[l] = k ==> pf[r]-k = pf[l]
        int l = binsearch(1, i, pf[i]-k);
        if(l!=-1){
            cout << l << " " << i << " " << kq << "\n";
            kq+=(i-l+1);
        }
    }
    cout << kq;
    return 0;
}
