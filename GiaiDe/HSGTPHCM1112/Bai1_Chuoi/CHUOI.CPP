#include <bits/stdc++.h>
using namespace std;
string n;
char mau[13] = "AOYEUIaoyeui";
bool tim(char k){
    for(int i = 0; i<13; ++i){
        if(mau[i]==k) return true;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CHUOI.IN", "r", stdin);
    freopen("CHUOI.OUT", "w", stdout);
    cin >> n;
    int gh = n.size();
    for(int i = 0; i<gh; ++i){
        if(tim(n[i])) continue;
        cout << "." << (char)tolower(n[i]);
    }

    return 0;
}
