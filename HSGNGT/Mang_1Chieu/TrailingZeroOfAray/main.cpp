#include <bits/stdc++.h>
using namespace std;
vector<long long> a;
int main()
{
    int n,d=0,cs;
    cin>>n;
    long long t, x=1;
    bool lt = true;
    for(int i = 0; i<n; ++i){
        cin>>t;
        a.push_back(t);
        x*=t;
    }
    while(x>0){
        cs = x%10;
        if(cs==0&&lt){
            d++;
            lt=true;
        }
        x/=10;
    }
    cout << d;
    return 0;
}
