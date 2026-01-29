#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int m,n, a[MAXN+5];
vector<pair<int, int>> cnt;
void sub1(){
    int x,k;
    cin >> x >> k;
    set<int> cnt;
    int i = x, kq = 0;
    while(a[x]-a[i]<=k&&i>=1){
        cnt.insert(a[i]);
        i--;
    }
    i=x;
    while(a[i]-a[x]<=k&&i<=n){
        cnt.insert(a[i]);
        i++;
    }
    for(int t:cnt){
        kq++;
    }
    cout << kq;
}
int binsearchl(int limit, int idx){
    int l = 1, r = idx, kq = idx;
    while(l<=r){
        int m = l+(r-l)/2;
        if(a[idx]-a[m]<=limit){
            kq = m;
            r = m-1;
        }
        else l = m+1;
    }
    return kq;
}
int binsearchr(int limit, int idx){
    int l = idx, r = n, kq = idx;
    while(l<=r){
        int m = l+(r-l)/2;
        if(a[m]-a[idx]<=limit){
            kq = m;
            l = m+1;
        }
        else r = m-1;
    }
    return kq;
}
void sub2(){
    int kq = 0, d = 0;
    while(m--){
        int x,k;
        cin >> x >> k;
        int l = binsearchl(k,x), r=binsearchr(k,x);
        cnt.push_back({l,r});
        d++;
    }
    sort(cnt.begin(), cnt.end());
    int curl = cnt[0].first, curr = cnt[0].second;
    for(int i=1; i<d; ++i){
        if(cnt[i].first<=curr){
            curr = max(curr, cnt[i].second);
        }
        else{
            kq+=(curr-curl+1);
            curr = cnt[i].second;
            curl = cnt[i].first;
        }
    }
    kq+=(curr-curl+1);
    cout << kq;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("NHAP.INP", "r", stdin);
    cin >> n >> m;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    if(m==1){
        sub1();
    }
    else{
       sub2();
    }
    return 0;
}
