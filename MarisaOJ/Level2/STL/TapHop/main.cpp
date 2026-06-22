#include <bits/stdc++.h>
using namespace std;
int q;
vector<int> a;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> q;
    while(q--){
        int type;
        cin >> type;
        if(type==1){
            int val;
            if(a.empty()) a.push_back(val);
            else{
                auto it = lower_bound(a.begin(), a.end(), val);
                a.insert(a.begin()+distance(it, a.begin()), val);
            }
        }
        else if(type ==2){
            int x;
            cin >> x;
            if(binary_search(a.begin(), a.end(), x)){
                int it = distance(lower_bound(a.begin(), a.end(), x), a.begin());
                a.erase(a.begin() + it);
            }
        }
        else if(type ==3){
            int x;
            cin >> x;
            auto it = upper_bound(a.begin(), a.end(), x);
            if(it == a.end()) cout << -1;
            else{
                cout << distance(it, a.begin()) << "\n";
            }
        }
        else{
            int x;
            cin >> x;
            auto it = lower_bound(a.begin(), a.end(), x);
            if(it==a.end()) cout << -1;
            else{
                cout << distance(it, a.begin()) << "\n";
            }
        }
    }

    return 0;
}
