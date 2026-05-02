#include <bits/stdc++.h>
using namespace std;
#define int long long
string s;
int a[20], n, kq;
int checksnt(){
    int so = 0;
    for(int i = 0; i<n; ++i){
        so = so*10+a[i];
    }
    if(so<2) return -1;
    for(int i = 2; i*i<=so; ++i){
        if(so%i==0) return -1;
    }
    return so;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("MAXPRIME.INP", "r", stdin);
    freopen("MAXPRIME.OUT", "w", stdout);
    cin >> s;
    n = s.size();
    vector<int> t;
    for(int i = 0; i<n; ++i){
        if(s[i]=='?'){
            t.push_back(i);
        }
        else{
            a[i] = s[i]-'0';
        }
    }
    int s1 = t[0], s2 = t[1];
    for(int i = 1; i<=9; ++i){
        a[s1] = i;
        for(int j = 1; j<=9; ++j){
            a[s2] = j;
            int so = checksnt();
            if(so!=-1){
                kq = max(kq, so);
            }
        }
    }
    cout << kq;
    return 0;
}
