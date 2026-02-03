#include <bits/stdc++.h>
using namespace std;
int square(int val){
    int t = 0;
    while(val>0){
        t+=((val%10)*(val%10));
        val/=10;
    }
    return t;
}
void sub1(int x, int v, int n){
    int kq = 0, cur = x;
    if(cur==v) kq++;
    for(int i = 2; i<=n; ++i){
        int t = square(cur);
        if(t==v) kq++;
        cur = t;
    }
    cout << kq << "\n";
}
void sub2(int x, int v, int n){
    map<int, int>a;
    int cur = x, vt = -1,l,r;
    if(cur == v) vt = 1;
    for(int i = 2; i<=n; ++i){
        int t = square(cur);
        if(t == v) vt = i;
        if(a.find(t) != a.end()){
            r = i;
            l = a[t];
            break;
        }
        a[t]++;
        cur = t;
    }
    if(vt<1){
        cout << 0 << "\n";
        return;
    }
    if(vt<l){
        cout << 1 << "\n";
        return;
    }
    int sl = ((vt-l)+r)-(vt+1)+1;
    n-=l;
    cout << n/sl << "\n";
}
int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("NHAP.INP", "r", stdin);
    cin >> t;
    while(t--){
        int x,v,n;
        cin >> x >> v >> n;
        sub1(x,v,n);
        //sub2(x,v,n);
    }
    return 0;
}
