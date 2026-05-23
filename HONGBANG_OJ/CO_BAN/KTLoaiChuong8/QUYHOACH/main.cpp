#include <bits/stdc++.h>
using namespace std;
int h, n, kq;
vector <int> vkq;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("QUYHOACH.INP", "r", stdin);
    freopen("QUYHOACH.OUT", "w", stdout);
    cin >> n >> h;
    for(int i = 0; i<n; ++i){
        int t;
        cin >> t;
        if(t>h){
            kq++;
            vkq.push_back(i);
        }
    }
    cout << kq << "\n";
    for(int i : vkq) cout << i << " ";
    return 0;
}
