#include<bits/stdc++.h>
using namespace std;
vector<vector<double>> mt;
vector<vector<double>> mt1;
void nhap(int &n, int &m){
    n = 0;
    string temp;
    while(getline(cin, temp)){
        if(temp.empty()) break;
        m=0;
        vector<double> ha;
        double so;
        stringstream s (temp);
        while (s>>so){
            ha.push_back(so);
            m++;
        }
        mt.push_back(ha);
        n++;
    }
}
void mtcv(int n, int m){
    mt1.resize(m, vector<double>(n));
    for(int i = 0; i<n; ++i){
        int k = 0;
        for(int j = m-1; j>=0; --j){
            mt1[k++][i] = mt[i][j];
        }
    }
    for(const auto &i:mt1){
        for(double so:i) cout << so << " ";
        cout << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BTCB092.INP", "r", stdin);
    freopen("BTCB092.OUT", "w", stdout);
    int n, m;
    nhap(n,m);
    mtcv(n,m);
    return 0;
}
