#include <bits/stdc++.h>
using namespace std;
map <long long, long long> a;
void ptthuasont(long long n){
    if(n==1) cout << "1^1";
    else{
        for(long long i = 2; i*i<=n; ++i){
            while(n%i==0){
                a[i]++;
                n/=i;
            }
        }
    }
    if(n>1){
        a[n]++;
    }
    bool f = true;
    for(auto &i:a){
        if(!f){
            cout << " x ";
        }
        cout << i.first << "^" << i.second;
        f = false;
    }
    cout << "\n";
}
void PTThuaSoNTsangMPF(long long n){
    vector<long long> mangMPF(n+1);
    for(long long i = 2; i*i<=n; ++i){
        if(mangMPF[i]==0){
            for(long long j = i*i; j<=n; j+=i){
                if(mangMPF[j]==0) mangMPF[j]=i;
            }
        }
    }
    for(long long i = 2; i<=n; ++i){
        if(mangMPF[i]==0) mangMPF[i]=i;
    }
}
void demuoc(long long n){
    long long d;
    d = 0;
    for(long long i = 1; i*i<=n; ++i){
        if(n%i==0){
            if(i!=n/i){
                d+=2;
            }
            else{
                d++;
            }
        }
    }
    cout << d << "\n";
}
void tonguoc(void){
    long long t = 0;
    for(auto &i:a){
        t*=(i.second+1);
    }
    cout << t << "\n";
}
void demvatinhtonguocbanglap(long long n){
    long long d, t;
    d = t = 0;
    for(long long i = 1; i*i<=n; ++i){
        if(n%i==0){
            if(i!=n/i){
                t+=i+n/i;
                d+=2;
            }
            else{
                t+=i;
                d++;
            }
        }
    }
    cout << d << "\n" << t;
}
long long n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("PTTSNT.INP", "r", stdin);
    freopen("PTTSNT.OUT", "w", stdout);
    cin >> n;
    ptthuasont(n);
    demuoc(n);
    tonguoc();
    //demvatinhtonguocbanglap(n);
    return 0;
}
