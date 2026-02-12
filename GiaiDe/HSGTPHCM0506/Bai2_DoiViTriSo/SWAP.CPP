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
        int cs = s[i]-'0';
        for(int d = 0; d<cs; ++d){
            if(i==0&&d==0) continue;
            int bj = -1;
            for(int j = n-1; j>=i; --j){
                if(s[j]-'0' == d){
                    bj = j;
                    break;
                }
            }
            if(bj!=-1){
                swap(s[i], s[bj]);
                cout << s;
                return 0;
            }
        }
    }
    cout << s;
    return 0;
}
