#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d=0;
    cin >> n;
    for(int i = 1; i<=n; ++i){
        int p,v,t;
        cin >> p >> v >> t;
        if(p>0&&v>0) d++;
            else if(p>0&&t>0) d++;
                else if(v>0&&t>0) d++;
    }
    cout << d;
    return 0;
}
