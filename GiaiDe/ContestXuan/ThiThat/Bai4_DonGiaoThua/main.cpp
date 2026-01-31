#include <bits/stdc++.h>
using namespace std;
const int MANX = 1e9;
int k,n;
pair<int,int> a[MAXN+5];
int checkpos(int l,int r){
    int limit = k, pos;
    while(1){
        if(limit %2==0){
            pos = limit/2;
        }
        else{
            pos = limit/2+1;
        }
        if(a[pos].empty()) return pos;

    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> k >> n;
    while(n--){
        int l,r;
        cin >> l >> r;

    }
    return 0;
}
