#include <bits/stdc++.h>
using namespace std;
long long n, kq, t=0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("SUMD.INP", "r", stdin);
    freopen("SUMD.OUT", "w", stdout);
    cin >> n;
    while(n>0){
        t+=n%10;
        n/=10;
    }
    if(t<=9){
        cout << t;
        return 0;
    }
    if(t<=18){
        cout << t-9 << 9;
        return 0;
    }
    if(t<=27){
        cout << t-18 << 9 << 9;
        return 0;
    }
    if(t<=36){
        cout << t-27 << 9 << 9 << 9;
        return 0;
    }
    if(t<=45){
        cout << t-36 << 9 << 9 << 9 << 9;
        return 0;
    }
    if(t<=54){
        cout << t-45 << 9 << 9 << 9 << 9 << 9;
        return 0;
    }
    if(t<=63){
        cout << t-54 << 9 << 9 << 9 << 9 << 9 << 9;
        return 0;
    }
    if(t<=72){
        cout << t-63 << 9 << 9 << 9 << 9 << 9 << 9 << 9;
        return 0;
    }
    if(t<=81){
        cout << t-72 << 9 << 9 << 9 << 9 << 9 << 9 << 9 << 9;
        return 0;
    }
    if(t<=90){
        cout << t-81 << 9 << 9 << 9 << 9 << 9 << 9 << 9 << 9 << 9;
        return 0;
    }
    if(t<=99){
        cout << t-90 << 9 << 9 << 9 << 9 << 9 << 9 << 9 << 9 << 9 << 9;
        return 0;
    }
    if(t<=108){
        cout << t-99 << 9 << 9 << 9 << 9 << 9 << 9 << 9 << 9 << 9 << 9 << 9;
        return 0;
    }
    if(t<=117){
        cout << t-108;
        for(int i = 1; i<=12; ++i) cout << 9;
        return 0;
    }
    if(t<=126){
        cout << t-117;
        for(int i = 1; i<=13; ++i) cout << 9;
        return 0;
    }
    if(t<=135){
        cout << t-126;
        for(int i = 1; i<=14; ++i) cout << 9;
        return 0;
    }
    if(t<=144){
        cout << t-135;
        for(int i = 1; i<=15; ++i) cout << 9;
        return 0;
    }
    if(t<=153){
        cout << t-144;
        for(int i = 1; i<=16; ++i) cout << 9;
        return 0;
    }
    if(t<=162){
        cout << t-153;
        for(int i = 1; i<=17; ++i) cout << 9;
        return 0;
    }
    if(t<=171){
        cout << t-162;
        for(int i = 1; i<=18; ++i) cout << 9;
        return 0;
    }
    if(t<=180){
        cout << t-171;
        for(int i = 1; i<=19; ++i) cout << 9;
        return 0;
    }
    return 0;
}
