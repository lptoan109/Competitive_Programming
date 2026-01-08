#include <bits/stdc++.h>
using namespace std;
long long n, kq = 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CHIAHET.INP", "r", stdin);
    freopen("CHIAHET.OUT", "w", stdout);
    cin >> n;
    if(n<=1e7){
        for(long long i = 1; i<=n; ++i){
            if(i%2!=0&&i%3!=0&&i%5!=0&&i%7!=0) kq++;
        }
    }
    else{
        long long d = 0;
        for(long long i = 1; i<=210; i++){
            if(i%2!=0&&i%3!=0&&i%5!=0&&i%7!=0) d++;
        }
        long long sl = n/210, slk = n%210;
        kq = (d*sl)+(d*slk);
    }
    cout << kq;
    return 0;
}
