#include <bits/stdc++.h>
using namespace std;
vector<string> cnt;
int n, q;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        string s;
        cin >> s;
        cnt.push_back(s);
    }
    sort(cnt.begin(), cnt.end());
    cin >> q;
    for(int i = 1; i<=q; ++i){
        string s;
        cin >> s;
        if(binary_search(cnt.begin(), cnt.end(), s)){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
    return 0;
}
