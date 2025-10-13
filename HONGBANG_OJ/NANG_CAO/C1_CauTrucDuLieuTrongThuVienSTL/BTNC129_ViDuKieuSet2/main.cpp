#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <ll> a,b,d;
set <ll> kt;
int main()
{
    string n;
    getline(cin,n);
    stringstream t(n);
    while(t>>n){
        ll ta = atol(n);
        a.push_back(ta);
    }
    ll na;
    while(cin>>na){
        if(a.find(na)!=a.end()) b.push_back(na);
        else d.push_back(na);
    }
    a.insert(a.end(),b.begin(),b.end());
    for(auto i:c) cout << i << " ";
    cout << "\n";
    for(auto i:d) cout << i;
    return 0;
}
