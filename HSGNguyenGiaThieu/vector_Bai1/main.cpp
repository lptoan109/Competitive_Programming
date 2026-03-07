#include <bits/stdc++.h>
using namespace std;
vector <int>a;
int main()
{
    int n, t;
    cin >> n;
    a.push_back(0);
    for(int i = 1; i<=n;++i){
        int tt;
        cin >> tt;
        if(tt==1){
            cin >> t;
            a.push_back(t);
        }
        else if(t==2){
            a.pop_back();
        }
    }
    if(a.empty()) cout << "EMPTY";
    else{
        for(auto i:a){
            cout << i << " ";
        }
    }
    return 0;
}
