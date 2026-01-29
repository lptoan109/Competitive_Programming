#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5;
int n, a[MAXN], b[MAXN];
vector<int> c;
long long kq = 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("NEWGAME.INP", "r", stdin);
    freopen("NEWGAME.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    for(int i = 1; i<=n; ++i){
        cin >> b[i];
    }
    for(int i = 1; i<=n; ++i){
        c.push_back(a[i]-b[i]);
    }
    sort(c.begin(), c.end());
    int i = 0,j = n-1;
    while(i<j){
        if(c[i]+c[j]>0){
            kq+=(j-i);
            j--;
        }
        else i++;
    }
    cout << kq;
    return 0;
}
