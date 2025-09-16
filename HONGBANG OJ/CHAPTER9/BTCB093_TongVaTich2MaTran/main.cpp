#include <bits/stdc++.h>
using namespace std;
double mt1[105][105], mt2[105][105],mt3[105][105];
void nhap(int &n1, int &n2, int &m1, int &m2){
    n1 = 0;
    string temp;
    while(getline(cin, temp)){
        if(temp.empty()) break;
        m1 = 0;
        double so;
        stringstream s (temp);
        while (s>>so){
            mt1[n1][m1] = so;
            m1++;
        }
        n1++;
    }
    n2 = 0;
    while(getline(cin, temp)){
        m2 = 0;
        double so;
        stringstream s (temp);
        while (s>>so){
            mt2[n2][m2] = so;
            m2++;
        }
        n2++;
    }
}
void xuat(int n, int m){
    for(int i = 0; i<n; ++i){
        for(int j = 0; j<m; ++j)
            cout << mt3[i][j] << " ";
    cout << "\n";
    }
}
void tongmt(int n1, int m1, int n2, int m2){
    if(n1!=n2||m1!=m2) cout << "NO\n";
    else{
        for(int i = 0; i<n1; ++i){
            for(int j = 0; j<m1; ++j){
                mt3[i][j] = mt1[i][j]+mt2[i][j];
            }
        }
        xuat(n1,m2);
    }
}
void tichmt(int n1, int m1, int n2, int m2){
    if(m1!=n2) cout << "NO";
    else{
        for(int i = 0; i <n1; ++i){
            for(int j = 0; j<m2; ++j){
                mt3[i][j] = 0;
                for(int k = 0; k<m1; ++k){
                    mt3[i][j]+=mt1[i][k]*mt2[k][j];
                }
            }
        }
        xuat(n1,m2);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BTCB093.INP", "r", stdin);
    freopen("BTCB093.OUT", "w", stdout);
    int n1, n2, m1, m2;
    nhap(n1,n2,m1,m2);
    tongmt(n1,m1,n2,m2);
    cout << "\n";
    tichmt(n1,m1,n2,m2);
    return 0;
}
