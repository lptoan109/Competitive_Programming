#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
bool scp(int so){
    int cb2 = sqrt(so);
    if(cb2*cb2==so) return true;
    return false;
}
int n, a[MAXN+5];
void sub1(){
    long long kq = 0;
    for(int i = 1; i<n; ++i){
        for(int j = i+1; j<=n; ++j){
            double A = a[i]/__gcd(a[i], a[j]), B = a[j]/__gcd(a[i], a[j]);
            //cout << a[i] << " " << a[j] << " " << A << " " << B << "\n";
            int so = A*B, c2so = sqrt(so);
            if(c2so*c2so == so) kq++;
        }
    }
    cout << kq;
}
int cnt[1005];
void sub3(){
    for(int i = 1; i<=n; ++i){
        cnt[a[i]]++;
    }
    int kq = 0;
    for(int i = 1; i<=1000; ++i){
        if(cnt[i] == 0){
            continue;
        }
        for(int j = i; j<=1000; ++j){
            if(cnt[j] == 0){
                continue;
            }
            if(scp(i * j)){
                if(i == j){
                    kq+=cnt[i]*(cnt[i]-1)/2;
                }
                else{
                    kq+=cnt[i]*cnt[j];
                }
            }
        }
    }
    cout << kq;
}
bool kt1 = true, kt2 = true;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
//    freopen("NHAP.INP", "r", stdin);
//    freopen("NHAP.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
        if(!scp(a[i])) kt1 = false;
        if(a[i]>1000) kt2 = false;
    }
    if(n<=1000){
        sub1();
        return 0;
    }
    if(kt1){
        cout << n*(n-1)/2;
        return 0;
    }
    if(kt2){
        sub3();
        return 0;
    }
    return 0;
}
