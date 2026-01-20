#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
const int limit = 1e6;
bool compare(pair<int, int>a, pair<int, int>b){
    if(a.se==b.se) return a.fi<b.fi;
    return a.se<b.se;
}
int n, snt[limit+5];
vector <pair<int, int>> a;
void sang(){
    for(int i = 2; i<=limit; ++i){
        if(snt[i]==0){
            for(int j = i; j<=limit; j+=i){
                snt[j]++;
            }
        }
    }
}
int main()
{
    freopen("NHAP.INP", "r", stdin);
    scanf("%d", &n);
    sang();
    for(int i = 0; i<n; ++i){
        int x;
        scanf("%d", &x);
        a.push_back({x, snt[x]});
    }
    sort(a.begin(), a.end(), compare);
    for(auto &i:a){
        printf("%d ", i.fi);
    }
    return 0;
}
