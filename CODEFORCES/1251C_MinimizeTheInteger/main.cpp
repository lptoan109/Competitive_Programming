#include <bits/stdc++.h>
using namespace std;
int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
        string s, ans = "", l = "", r = "";
        cin >> s;
        for(char i:s){
            if((i-'0')%2!=0) l+=i;
            else r+=i;
        }
        int na = l.size(), nb = r.size(), i = 0, j = 0;
        while(i<na && j<nb){
            if(l[i]<r[j] && i<na){
                ans+=l[i];
                i++;
            }
            else if(j<nb){
                ans+=r[j];
                j++;
            }
        }
        cout << ans;
        if(i<na){
            for(int t = i; t<na; ++t){
                cout << l[t];
            }
        }
        if(j<nb){
            for(int t = j; t<nb; ++t) cout << r[t];
        }
        cout << "\n";
    }
    return 0;
}
