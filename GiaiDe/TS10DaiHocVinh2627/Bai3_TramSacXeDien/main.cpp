#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int n, l, a[MAXN+5];
bool check[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> l;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    if(l==1){
        long long suml = 0, sumr = 0;
        for(int i = 1; i<=n; ++i){
            if(i%2==0){
                sumr+=a[i];
            }
            else suml+=a[i];
        }
        cout << max(suml, sumr);
        return 0;
    }
    if(l==0){
        long long kq = 0;
        for(int i = 1; i<=n; ++i){
            kq+=a[i];
        }
        cout << kq;
        return 0;
    }
    long long kq = 0;
    int i = 1;
    while(!check[i] && i<=n){
        int j = i;
        long long t = 0;
        while(j<=n){
            t+=a[j];
            check[j] = true;
            j+=l+1;
        }
        kq = max(kq, t);
        i++;
    }
    cout << kq;
    return 0;
}
