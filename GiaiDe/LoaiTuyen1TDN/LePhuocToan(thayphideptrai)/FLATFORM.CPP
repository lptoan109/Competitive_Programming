#include<bits/stdc++.h>
using namespace std;
struct ds{
    int type, val, idx;
};
int n;
vector<ds> a;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("FLATFORM.INP", "r", stdin);
    freopen("FLATFORM.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        int l, r, v;
        cin >> l >> r >> v;
        a.push_back({1, v, l});
        a.push_back({2, v, r});
    }
    return 0;
}
