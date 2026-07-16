#include <bits/stdc++.h>
using namespace std;
const int MAXN = 6e7;
bool check[MAXN+5];
vector<int> snt;
void pre(){
    check[0] = check[1] = true;
    for(int i = 2; i*i<=MAXN; ++i){
        if(!check[i]){
            for(int j = i*i; j<=MAXN; j+=i){
                check[j] = true;
            }
        }
    }
    for(int i =1 ; i<=MAXN; ++i) if(!check[i]) snt.push_back(i);
}
int q;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    pre();
    int nt = snt.size();
    cin >> q;
    while(q--){
        unsigned long long n, t = 1;
        int k;
        cin >> n >> k;
        for(int i = 0; i<k; ++i){
            t*=snt[i];
            if(t>n){
                cout << -1 << "\n";
                goto ketthuc;
            }
        }
        for(int i = k; i<nt; ++i){
            t/=snt[i-k];
            t*=snt[i];
            if(t>n){
                t/=snt[i];
                t*=snt[i-k];
                break;
            }
        }
        cout << t << "\n";
        ketthuc:
            continue;
    }
    return 0;
}
