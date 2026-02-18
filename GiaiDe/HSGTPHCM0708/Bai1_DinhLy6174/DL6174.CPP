#include <bits/stdc++.h>
using namespace std;
int cur, kq = 1;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DL6174.INP", "r", stdin);
    freopen("DL6174.OUT", "w", stdout);
    cin >> cur;
    while(cur!=6174){
        int nn[5], ln[5];
        int k = 0;
        while(cur>0){
            k++;
            int cs = cur%10;
            nn[k] = cs;
            ln[k] = cs;
            cur/=10;
        }
        sort(nn+1, nn+k+1);
        sort(ln+1, ln+k+1, greater<int>());
        int a=nn[1],b=ln[1];
        for(int i = 2; i<=k; ++i){
            a = a*10+nn[i];
            b = b*10+ln[i];
        }
        cur = b-a;
        kq++;
    }
    cout << kq;
    return 0;
}
