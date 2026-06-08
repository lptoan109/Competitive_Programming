#include <bits/stdc++.h>
using namespace std;
const int MAXN = 5000;
int n;
pair<long long, long long> a[MAXN+5];
long long kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> a[i].first;
    }
    for(int i = 1; i<=n; ++i){
        cin >> a[i].second;
    }
    for(int i = 1; i<n; ++i){
        for(int j = i+1; j<=n; ++j){
            if(((a[j].first - a[i].first)*(a[j].first - a[i].first)) + ((a[j].second-a[i].second)*(a[j].second-a[i].second))>kq){
                kq = ((a[j].first - a[i].first)*(a[j].first - a[i].first)) + ((a[j].second-a[i].second)*(a[j].second-a[i].second));
                //cout << i << " " << j << "\n";
            }
        }
    }
    cout << kq;
    return 0;
}
