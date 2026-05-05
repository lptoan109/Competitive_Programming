#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e7;
int t, ps[MAXN+5];
bool check[MAXN+5], checksnt[MAXN+5];
bool ktsntcap(int k){
    vector<int> tam;
    while(k>0){
        tam.push_back(k%10);
        k/=10;
    }
    reverse(tam.begin(), tam.end());
    int so = 0;
    for(int i:tam){
        so=so*10+i;
        if(!check[so]){
            return true;
        }
    }
    return false;
}
void sang(){
    for(int i = 2; i*i<=MAXN; ++i){
        if(!check[i]){
            for(int j = i*i; j<=MAXN; j+=i){
                check[j] = true;
            }
        }
    }
    for(int i = 10; i<=MAXN; ++i){
        if(!check[i]){
            if(ktsntcap(i)) checksnt[i] = true;
        }
    }
    for(int i = 1; i*i<=MAXN; ++i){
        ps[i] = ps[i-1]+(checksnt[i]?1:0);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("HUB02.INP", "r", stdin);
    freopen("HUB02.OUT", "w", stdout);
    cin >> t;
    sang();
    while(t--){
        int l, r;
        cin >> l >> r;
        cout << ps[r]-ps[l-1] << "\n";
    }
    return 0;
}
