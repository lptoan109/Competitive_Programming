#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("SWAP.INP", "r", stdin);
    freopen("SWAP.OUT", "w", stdout);
    cin >> s;
    int n = s.size();
    for(int i = 0; i<n; ++i){
        int vtm = n-1;
        bool dd = false;
        for(int j = n-1; j>=i+1; --j){
            int cs = s[j]-'0', csm = s[vtm]-'0', csg = s[i]-'0';
            if(j==n-1){
                if(cs<=csm&&cs<csg){
                    if(i==0&&s[j]=='0') continue;
                    dd  = true;
                    vtm = j;
                }
            }
            if(cs<csm&&cs<csg){
                if(i==0&&s[j]=='0') continue;
                dd  = true;
                vtm = j;
            }
        }
        if(dd){
            swap(s[i], s[vtm]);
            break;
        }
    }
    cout << s;
    return 0;
}
