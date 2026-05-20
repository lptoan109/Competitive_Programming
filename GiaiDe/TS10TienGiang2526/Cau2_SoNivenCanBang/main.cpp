#include <bits/stdc++.h>
using namespace std;
bool check(int k){
    int t = 0, da, db, so = k;
    t = da = db = 0;
    while(so>0){
        int cs = so%10;
        if(cs%2==0) db++;
        else da++;
        t+=cs;
        so/=10;
    }
    return k%t==0 && da==db;
}
int n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = n; i>=1; --i){
        if(check(i)){
            cout << i;
            return 0;
        }
    }
    return 0;
}
