#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k, cnt, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for(ll i = 1; i<=n; ++i){
        if(i%2==0){
            kq+=i;
            cnt++;
            if(cnt==k){
                cout << kq;
                return 0;
            }
        }
    }
    for(ll i = 1; i<=n; ++i){
        if(i%3==0 && i%2!=0){
            kq+=i;
            cnt++;
            if(cnt==k){
                cout << kq;
                return 0;
            }
        }
    }
    for(ll i = 1; i<=n; ++i){
        if(i%3!=0 && i%2!=0){
            kq+=i;
            cnt++;
            if(cnt==k){
                cout << kq;
                return 0;
            }
        }
    }
    cout << kq;
    return 0;
}
