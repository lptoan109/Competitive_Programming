#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e3;
int n, a[MAXN+5];
bool kt[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("NHAP.INP", "r", stdin);
    cin >> n;
    bool m = false;
    int d = 0;
    for(int i = 1; i<=n; ++i){
        string s;
        cin >> s;
        if(s=="mumble"){
            int d = 1, t = i-1;
            while(kt[t]==true && t>=1){
                d++;
                t--;
            }
        }
    }
    cout << "makes sense";
    return 0;
}
