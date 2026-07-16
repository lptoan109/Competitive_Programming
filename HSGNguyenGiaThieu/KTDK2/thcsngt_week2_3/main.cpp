#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t1 = -1, t2, kq = 0;
    while(cin>>t2){
        if(t2==-1) break;
        if(t2==t1) kq++;
        t1 = t2;
    }
    cout << kq;
    return 0;
}
