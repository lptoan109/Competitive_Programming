#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <ll> vec,kq;
set <ll> kt;
int main()
{
    ll n;
    while(cin>>n){
        vec.push_back(n);
    }
    for(auto i: vec){
        if(kt.find(i)==kt.end()){
            kq.push_back(i);
            kt.insert(i);
        }
    }
    cout << kq.size() << "\n";
    for(auto i:kq) cout << i << " ";
    return 0;
}
