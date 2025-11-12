#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e6;
ll n, top[MAXN+5], bot[MAXN+5], kq=0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    ll pstop[n+5], psbot[n+5];
    pstop[0] = 0; psbot[0] = 0;
    for(int i = 1; i<=n; ++i){
        cin >> top[i];
        pstop[i] = pstop[i-1]+ top[i];
    }
    for(int i = 1; i<=n; ++i){
        cin >> bot[i];
        psbot[i] = psbot[i-1]+bot[i];
    }
    for(int i = 1; i<n; ++i){
        ll ttop = pstop[n] - pstop[i-1], tbot = psbot[n] - psbot[i-1];
        kq+=top[i];
        if(ttop<tbot){
            kq+=tbot;
            break;
        }
    }
    kq+=top[n];
    cout << kq;
    return 0;
}
