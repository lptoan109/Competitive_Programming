#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("NHAP.INP", "r", stdin);
    string s;
    while(cin >> s){
        if(next_permutation(s.begin(), s.end())) cout << s << "\n";
        else cout << "no answer\n";
    }
    return 0;
}
