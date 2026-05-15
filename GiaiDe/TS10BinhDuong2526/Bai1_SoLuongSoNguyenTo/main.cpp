#include <bits/stdc++.h>
using namespace std;
bool check(long long k){
    if(k==2 || k==3) return true;
    if(k<2 || k%2==0 || k%3==0) return false;
    for(long long i = 5; i*i<=k; i+=6){
        if(k%i==0 || k%(i+2)==0) return false;
    }
    return true;
}
string s;
long long kq;
map<long long, int> cnt;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> s;
    long long limit = 1LL<<(s.size());
    for(long long i = 1; i<limit; ++i){
        long long t = i, pos = 0;
        string k="";
        while(t>0){
            if(t&1) k+=s[pos];
            //cout << s[pos]-'0' - 1 << "\n";
            pos++;
            t>>=1;
        }
        sort(k.begin(), k.end());
        do{
            long long so = stoll(k);
            if(cnt.find(so)==cnt.end()){
                if(check(stoll(k))) kq++;
            }
            cnt[so]++;
        }
        while(next_permutation(k.begin(), k.end()));
    }
    cout << kq;
    return 0;
}
