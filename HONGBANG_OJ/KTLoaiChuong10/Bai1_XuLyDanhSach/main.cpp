#include <bits/stdc++.h>
using namespace std;

string upper(string s){
    for(int i = 0; i<s.size; ++i){
        s[i]+=32;
    }
    return s;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("XLDS.INP", "r", stdin);
    freopen("XLDS.OUT", "w", stdout);

    int n,d=0, dt=0, ln = -1, ma[1000], dm = 0;
    cin >> n;
    cin.ignore();
    string s, ten, sc[10005], dn;
    bool dl=false;
    for(int j = 0; j<=n; ++j){
        getline(cin, s);
        int sl = s.size;
        for(int i = sl; i>=0; ++i){
            if(s[i]==' '){
                d++;
                if(dl==false){
                    for(int t = i+1; t<sl; ++t){
                        ten += s[i];
                        dt++
                        dl = true;
                    }
                }
            }
        }
        if(dt>ln){
            dn = ten;
            ln = dt;
        }
        ma[d] += 1;
        sc[j-1] = ten + ' ' + s + "\n";
        dm++;
    }
    for(int i = 0; i<dm; ++i){

    }
    sort(sc, sc + dm)
    for(int i = 0; i<1000; ++i){
        if(ma[i]>=1) cout << ma[i] << " ho ten co " << i << " tu\n";
    }
    return 0;
}
