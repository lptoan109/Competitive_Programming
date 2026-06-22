#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n, a[MAXN+5], kq;
pair<int, int> pfl[MAXN+5], pfr[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    int cur1 = 0, cur2 = 0;
    for(int i = 1; i<=n; ++i){
        if(a[i]==1){
            cur1++;
        }
        else cur1 = 0;
        pfl[i].first = cur1;
        if(a[i]==2){
            cur2++;
        }
        else cur2 = 0;
        pfl[i].second = cur2;
    }
    cur1 = cur2 = 0;
    for(int i = n; i>=1; --i){
        if(a[i]==1){
            cur1++;
        }
        else cur1 = 0;
        pfr[i].first = cur1;
        if(a[i]==2){
            cur2++;
        }
        else cur2 = 0;
        pfr[i].second = cur2;
    }
//    for(int i = 1; i<=n; ++i){
//        cout << pfl[i].first << " " << pfl[i].second << "\n";
//    }
//    for(int i = n; i>=1; --i){
//        cout << pfr[i].first << " " << pfr[i].second << "\n";
//    }
    for(int i = 1; i<n; ++i){
        kq = max(kq, max(min(pfl[i].first, pfr[i+1].second), min(pfl[i].second, pfr[i+1].first)));
    }
    cout << kq*2;
    return 0;
}
