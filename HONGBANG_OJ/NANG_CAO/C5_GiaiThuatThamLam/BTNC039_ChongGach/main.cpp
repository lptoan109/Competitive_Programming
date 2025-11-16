#include <bits/stdc++.h>
using namespace std;
int const MAXN = 1e7;
long long a[MAXN+5], n, maxx=0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n;
    for(int i = 0; i<n; ++i){
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i = 0; i<n; ++i){
        if(a[i]>=maxx){
            maxx++;
        }
    }
    cout << maxx;
    return 0;
}
