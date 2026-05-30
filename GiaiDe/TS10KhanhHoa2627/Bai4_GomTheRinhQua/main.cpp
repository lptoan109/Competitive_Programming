#include <bits/stdc++.h>
using namespace std;
int n, kq;
map<string, int> a;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i =1 ; i<=n; ++i){
        string s;
        cin >> s;
        a[s]++;
    }
    for(auto &i:a){
        kq+=(i.second/2);
    }
    cout << kq;
    return 0;
}
