#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("BOARDGAME.INP", "r", stdin);
    freopen("BOARDGAME.OUT", "w", stdout);
    ll k;
    string s;
    cin >> k >> s;
    ll score = k, l = (ll)ceil((-1.0 + sqrt(1.0 + 8.0 * k)) / 2.0), c = k - (l * (l - 1) / 2);
    for(int i = 0; i < s.length(); i += 2){
        string cmd = s.substr(i, 2);
        ll nl = l, nc = c, nk = k;
        bool ok = false;
        if(cmd == "ET"){
            if(c < l){ nc = c + 1; nk = k + 1; ok = true; }
        } else if(cmd == "WT"){
            if(c > 1) { nc = c - 1; nk = k - 1; ok = true; }
        } else if(cmd == "NW"){
            if(l > 1 && c > 1){ nl = l - 1; nc = c - 1; nk = k - l; ok = true; }
        } else if(cmd == "NE"){
            if(l > 1 && c <= l - 1) { nl = l - 1; nc = c; nk = k - l + 1; ok = true; }
        } else if(cmd == "SW"){
            nl = l + 1; nc = c; nk = k + l; ok = true;
        } else if(cmd == "SE"){
            nl = l + 1; nc = c + 1; nk = k + l + 1; ok = true;
        }
        if(ok){
            k = nk;
            l = nl;
            c = nc;
            score += k;
        }
    }
    cout << score << "\n";
    return 0;
}
