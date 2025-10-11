#include <bits/stdc++.h>
using namespace std;
int mt[105][105];
void nhap(int &n, int &m){
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
void co(int n, int m){
    int d = 0;
    for(int i = 0; i<n-1; ++i){
        for(int j = 0; j<m-1; ++j){
            if(mt[i][j]==1){
                int k = i, dt = 0;
                while(mt[k][j]==1){
                    dt++;
                    k++;
                    if(k>=n) break;
                }
                if(dt>d) d = dt;
                dt = 0; k = j;
                while(mt[i][k]==1){
                    dt++;
                    k++;
                    if(k>=m) break;
                }
                if(dt>d) d = dt;
                k = i; int h = j; dt=0;
                while(mt[k][h]==1){
                    k++; h++;
                    dt++;
                    if(k>=n||h>=m) break;
                }
                if(dt>d) d = dt;
                k = i; h = j; dt = 0;
                while(mt[k][h]==1){
                    k++; h--;
                    dt++;
                    if(k>=n||h<=0) break;
                }
            }
        }
    }
    cout << d;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BANCO.INP", "r", stdin);
    freopen("BANCO.OUT", "w", stdout);
    int n,m;
    nhap(n,m);
    co(n,m);
    return 0;
}
