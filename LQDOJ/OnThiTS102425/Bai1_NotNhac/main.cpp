#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("NOTES.INP", "r", stdin);
    freopen("NOTES.OUT", "w", stdout);
    cin >> n;
    while(n--){
        char t;
        cin >> t;
        if(t=='C') cout << 1 << " ";
        if(t=='D') cout << 2 << " ";
        if(t=='E') cout << 3 << " ";
        if(t=='F') cout << 4 << " ";
        if(t=='G') cout << 5 << " ";
        if(t=='A') cout << 6 << " ";
        if(t=='B') cout << 7 << " ";
    }
    return 0;
}
