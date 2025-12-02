#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
#define se second
#define fi first
bool qtsort(pair <long long, long long >a, pair<long long, long long>b){
    return (a.se<b.se);
}

long long n,p,t, kq = 0, ar[MAXN+5];
pair <long long, long long>a[MAXN+5];
void sub2(void){
    for(int i = 1; i<=n ;++i){
        cin >> t;
        a[i] = make_pair(i,t);
    }
    sort(a+1,a+n+1,qtsort);
    long long l = 1, r = n;
    while(l<r){
        //cout << l << " " << r << " " << a[r].se-a[l].se << " " << a[r].fi-a[l].fi << "\n";
        if((a[r].se-a[l].se)>=p){
            kq = max(kq, a[r].fi-a[l].fi);
            r--;
            cout << kq << " " << a[r].fi-a[l].fi << " " << a[l].se << " " << a[r].se << "\n";
        }
        else l++;
    }
    cout << kq;
}

void sub1(void){
    for(int i = 1; i<=n; ++i){
        cin >> ar[i];
    }
    for(int i = 1; i<=n ;++i){
        for(int j = n; j>i; --j){
            if(ar[j]-ar[i]>=p){
                long long t1 = j-i;
                kq = max(kq,t1);
            }
        }
    }
    cout << kq;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("Bai3.INP", "r", stdin);
    cin >> n >> p;
    if(n<=100){
        sub1();
    }
    else sub2();
    return 0;
}
