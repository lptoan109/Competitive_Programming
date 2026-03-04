#include <bits/stdc++.h>
using namespace std;
int q;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> q;
    while(q--){
        string s;
        cin >> s;
        bool ko=true, am=false;
        for(char i:s){
            if(i=='-'){
                am = true;
            }
            if(i>='1'&&i<='9') ko = false;
        }
        if(ko) cout << 0 << "\n";
        else if(am) cout << -1 << "\n";
        else cout << 1 << "\n";
  }

    return 0;
}
