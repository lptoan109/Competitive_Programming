#include <bits/stdc++.h>
using namespace std;
int n;
pair<int, int> kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i =1 ; i<=n; ++i){
        int t;
        cin >> t;
        if(t>kq.first){
            kq = {t, i};
        }
    }
    cout << kq.first << " " << kq.second;
    return 0;
}
