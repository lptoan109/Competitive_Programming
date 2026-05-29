#include <bits/stdc++.h>
using namespace std;
map<int, int> cnt;
int n;
long long kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i =1 ; i<=n; ++i){
        int t;
        cin >> t;
        t%=3;
        if(t==0){
            kq+=cnt[0];
        }
        if(t==1){
            kq+=cnt[2];
        }
        if(t==2){
            kq+=cnt[1];
        }
        cnt[t]++;
    }
    cout << kq;
    return 0;
}
