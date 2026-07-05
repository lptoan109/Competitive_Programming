#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e8;
bool check[MAXN+5];
vector<int> snt;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    check[0] = check[1] = true;
    for(int i = 2; i*i<=MAXN; ++i){
        if(!check[i]){
            for(int j = i*i; j<=MAXN; j+=i){
                check[j] = true;
            }
        }
    }
    for(int i = 1; i<=1e8; ++i){
        if(!check[i]) snt.push_back(i);
    }
    int t = 0;
    while(t<snt.size() && snt[t]<MAXN){
        cout << snt[t] << "\n";
        t+=100;
    }
    return 0;
}
