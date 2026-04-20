#include <bits/stdc++.h>
using namespace std;
struct point{
    double xa, xb, ya, yb;
};
struct line{
    double id,a, b;
};
const double EPS = 1e-9;
const int MAXN = 1e3;
int n;
line l[MAXN+5];
bool check(int t1, int t2){
    return fabs(l[t1].a*l[t2].b - l[t2].a*l[t1].b) > EPS;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);
    string s;
    while(getline(cin, s)){
        if(s.empty()) break;
        stringstream ss(s);
        double t, xta, xtb, yta, ytb;
        ss >> t >> xta >> yta >> xtb >> ytb;
        l[(int)t] = {t ,xtb-xta, ytb-yta};
        ++n;
    }
    for(int i = 1; i<=n; ++i){
        for(int j = i+1; j<=n; ++j){
            if(check(i, j)){
                cout << min(l[i].id, l[j].id) << " " << max(l[i].id, l[j].id) << "\n";
            }
        }
    }
    return 0;
}
