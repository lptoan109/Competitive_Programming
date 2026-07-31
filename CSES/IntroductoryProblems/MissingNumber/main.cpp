#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<n; ++i){
        int t;
        cin >> t;
        a.push_back(t);
    }
    sort(a.begin(), a.end());
    //cout << a[0];
    if(a[0]!=1){
        cout << 1;
        return 0;
    }
    int cur = a[0]-1;
    for(int i:a){
        if(i!=cur+1){
            cout << cur+1;
            return 0;
        }
        cur = i;
    }
    cout << n;
    return 0;
}
