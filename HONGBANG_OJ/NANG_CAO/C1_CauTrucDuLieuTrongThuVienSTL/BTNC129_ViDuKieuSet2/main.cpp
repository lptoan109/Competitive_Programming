#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> veca, vecb, vecc, vecd;
set<ll> sa, sb, sc;

int main() {
    string temp;

    getline(cin, temp);
    stringstream t1(temp);
    ll x;
    while (t1 >> x) {
        if(sa.insert(x).second){
            vecc.push_back(x);
        }
        sc.insert(x);
    }
    getline(cin, temp);
    getline(cin, temp);
    stringstream t2(temp);
    while (t2 >> x) {
        if(sa.insert(x).second){
            vecc.push_back(x);
        }
        for(auto i:sc){
            if(i==x) vecd.push_back(x);
        }
    }

    for (auto i : vecc) cout << i << " ";
    cout << "\n\n";
    for (auto i : vecd) cout << i << " ";

    return 0;
}
