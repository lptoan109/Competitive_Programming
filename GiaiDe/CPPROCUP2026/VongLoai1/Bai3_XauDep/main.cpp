#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n, q;
bool check[MAXN+5];
int a[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    for(int i = 1; i<=n; ++i){
        char t;
        cin >> t;
        a[i] = (int)t;
    }
    while(q--){
        char t;
        cin >> t;
        int so = (int)t;
        vector<int> tail;
        for(int i =1 ; i<=n; ++i){
            if(a[i]==so || check[i]){
                check[i] = true;
                continue;
            }
            if(tail.empty()||a[i]>=tail.back()){
                tail.push_back(a[i]);
            }
            else{
                auto it = upper_bound(tail.begin(), tail.end(), a[i]);
                if(it!=tail.end()){
                    *it = a[i];
                }
            }
        }
        cout << tail.size() << "\n";
    }
    return 0;
}
