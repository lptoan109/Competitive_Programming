#include <bits/stdc++.h>
using namespace std;
int mt[255][255], ma[255];
void nhap(int &n, int&m){
    n = 0;
    string temp;
    while(getline(cin, temp)){
        if(temp.empty()) break;
        m = 0;
        double so;
        stringstream s (temp);
        while (s>>so){
            mt[n][m] = so;
            m++;
        }
        n++;
    }
}
void velaibando(int n, int m){
    for(int i = 0; i<n; ++i){
        for(int j = 0; j<m; ++j){
            ma[mt[i][j]]+=1;
        }
    }
    for(int i = 0; i<255; ++i){
        if(ma[i]!=0) cout << i << " " << ma[i] << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("DIENTICH.INP", "r", stdin);
    freopen("DIENTICH.OUT", "w", stdout);
    int n,m;
    nhap(n,m);
    velaibando(n,m);
    return 0;
}
