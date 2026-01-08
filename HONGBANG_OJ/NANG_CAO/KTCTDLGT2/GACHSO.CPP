#include <bits/stdc++.h>
using namespace std;

string getS(int n){
    if(n==0) return "";
    int lim = 30000;
    vector<bool> p(lim + 1, true);
    p[0] = p[1] = false;
    for(int i = 2; i*i <= lim; i++){
        if(p[i]){
            for(int j = i * i; j <= lim; j += i) p[j] = false;
        }
    }
    string s = "";
    int c = 0;
    for(int i = 2; c < n; i++){
        if(p[i]){
            s+=to_string(i);
            c++;
        }
    }
    return s;
}

string solve(string s, int k, bool mx) {
    string r = "";
    int st = 0, n = s.size();
    while(k > 0){
        int b = st;
        for(int i = st; i <= n - k; i++){
            if(mx){
                if(s[i] > s[b]) b = i;
            }
            else{
                if(r.empty() && s[i] == '0') continue;
                if(s[i]<s[b] || (r.empty() && s[b]=='0')) b = i;
            }
        }
        r += s[b];
        st = b + 1;
        k--;
    }
    return r;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("GACHSO.INP", "r", stdin);
    freopen("GACHSO.OUT", "w", stdout);
    int n;
    cin >> n;
    string s = getS(n);
    int l = s.size();
    int k=(l % 2 == 0)?l/2:l-(l/2+1);
    cout << s << "\n\n" << solve(s, k, 1) << "\n\n" << solve(s, k, 0);
    return 0;
}
