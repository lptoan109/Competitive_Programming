#include <bits/stdc++.h>
using namespace std;
int k,sl = 0;
long long kq = 0;
string s;
int cnt[26];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BAI15.INP", "r", stdin);
    cin >> s >> k;
    int n = s.size();
    int l=0;
    for(int i = 0; i<n; ++i){
        int val = s[i]-'a';
        cnt[val]++;
        if(cnt[val]>=k){
            sl++;
        }
        while(sl>0){
            int val_l = s[l]-'a';
            if(cnt[val_l]>=k){
                sl--;
            }
            cnt[val_l]--;
            l++;
        }
        kq+=l;
    }
    cout << kq;
    return 0;
}
