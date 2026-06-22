#include <bits/stdc++.h>
using namespace std;
string n;
vector<int>a;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    getline(cin,n);
    int limit = n.size();
    for(int i = 0; i<limit; ++i){
        a.push_back(n[i]-'0');
    }
    sort(a.begin(), a.end());
    if(a[0]==0){
        int i = 0;
        while(a[i]==0){
            i++;
        }
        swap(a[i], a[0]);
    }
    for(int x:a) cout << x;
    return 0;
}
