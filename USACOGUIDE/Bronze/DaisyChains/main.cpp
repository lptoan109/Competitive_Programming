#include <bits/stdc++.h>
using namespace std;
int n;
long long kq;
double a[105];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    for(int i = 1; i<=n; ++i){
        for(int j = i; j<=n; ++j){
            map<double, int> cnt;
            double s= 0;
            for(int t = i; t<=j; ++t){
                s+=a[t];
                cnt[a[t]]++;
            }
            s/=(j-i+1);
            if(cnt[s]>=1) kq++;
        }
    }
    cout << kq;
    return 0;
}
