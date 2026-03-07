#include <bits/std++.h>
using namespace std;
vector <int> a;
int main()
{
    int n, t, m;
    cin >> n;
    for(int i = 0; i<n; ++i){
        cin >> t;
        a.push_back(t);
    }
    cin >> m;
    for(int i = 0; i<m; ++i){
        int tt, vt, t;
        cin >> tt;
        if(tt==1){
            cin >> vt >> t;
            a.insert(a.begin()+vt, t);
        }
        else{
            a.erase(vt);
        }
    }
    for(auto i:a) cout << i << " ";
    return 0;
}
