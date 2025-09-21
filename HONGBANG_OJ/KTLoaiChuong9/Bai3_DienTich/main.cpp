#include <bits/stdc++.h>
using namespace std;
int ma[255];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("DIENTICH.INP", "r", stdin);
    freopen("DIENTICH.OUT", "w", stdout);
    int so;
    while(cin>>so) if(so!=0) ma[so]+=1;
    for(int i = 0; i<255; ++i) if(ma[i]!=0) cout << i << " " << ma[i] << "\n";
    return 0;
}
