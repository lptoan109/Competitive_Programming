#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e4;
int n, sl;
bool check[MAXN+5];
vector <int> snt;
void sang(){
    for(int i = 2; i*i<=MAXN; ++i){
        if(!check[i]){
            for(int j = i*i; j<=MAXN; j+=i){
                check[j] = true;
            }
        }
    }
    for(int i = 2; i<=MAXN; ++i){
        if(!check[i]) snt.push_back(i);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("MOBIUS.INP", "r", stdin);
    freopen("MOBIUS.OUT", "w", stdout);
    cin >> n;
    if(n==1){
        cout << 1;
        return 0;
    }
    sang();
    int temp = n;
    for(int i:snt){
        if(temp%i==0){
            sl++;
            int d = 0;
            while(temp>0 && temp%i==0){
                d++;
                temp/=i;
            }
            if(d>=2){
                cout << 0;
                return 0;
            }
            if(temp<=0) break;
        }
    }
    if(sl%2==0) cout << 1;
    else cout << -1;
    return 0;
}
