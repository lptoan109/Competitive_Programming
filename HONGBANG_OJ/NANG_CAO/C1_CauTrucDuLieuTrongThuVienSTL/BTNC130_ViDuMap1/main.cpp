#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map <long long, int> mapp;
int main()
{
    int n;
    cin >> n;
    ll t;
    for(int i = 1; i<=n; ++i){
        cin >> t;
        mapp[t]+=1;
    }
    cout << mapp.size() << "\n";
    for(auto i = mapp.rbegin(); i!=mapp.rend(); ++i){
        cout << i->first << " " << i->second << "\n";
    }
    return 0;
}
