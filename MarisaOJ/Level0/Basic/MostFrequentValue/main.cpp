#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n, a[MAXN+5], kq, cnt;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i =1; i<=n; ++i) cin >> a[i];
    sort(a+1, a+1+n);
    int i = 1;
    a[0] = -1e6;
    while(i<=n){
        if(a[i]!=a[i-1]){
            int t = 1, j = i+1;
            while(a[j]==a[j-1]){
                t++;
                j++;
            }
            j--;
            if(t>=cnt){
                cnt = t;
                kq = a[j];
            }
            i = j;
        }
        i++;
    }
    cout << kq;
    return 0;
}
