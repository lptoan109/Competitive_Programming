#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
bool check[MAXN+5];
vector<long long> snt;
int binsearch(int l, int r, long long k){

}
void pre(){
    check[0] = check[1] = true;
    for(int i = 2; i*i<=MAXN; ++i){
        if(!check[i]){
            for(int j = i*i; j<=MAXN; j+=i){
                check[j] = true;
            }
        }
    }
    for(int i = 1; i<=MAXN; ++i){
        if(!check[i]) snt.push_back(1LL * i*i);
    }
}
int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    pre();
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        auto it1 = binsearch(1,snt.size(), n);

    }
    return 0;
}
