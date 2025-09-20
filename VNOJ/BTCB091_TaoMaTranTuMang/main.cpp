#include <bits/stdc++.h>
using namespace std;
vector<double> ma1, ma2, ma3, tong;
double nn = DBL_MAX;
vector<double> nhap(int &n) {
    vector<double> arr;
    string temp_line;
    n = 0;
    while (getline(cin, temp_line)) {
        if (temp_line.empty()) {
            break;
        }
        stringstream ss(temp_line);
        double so;
        while (ss >> so) {
            arr.push_back(so);
            n++;
            if(so<nn) nn = so;
        }
    }
    return arr;
}
void taomt(int n1, int n2, int n3){
    tong.insert(tong.end(), ma1.begin(), ma1.end());
    tong.insert(tong.end(), ma2.begin(), ma2.end());
    tong.insert(tong.end(), ma3.begin(), ma3.end());
    int nt = n1+n2+n3, k = 0, nmt = ceil((double)nt/3);
    double mt[3][nmt];
    for(int i = 0; i<3; ++i){
        for(int j = 0; j<nmt; ++j){
            if(k>=(n1+n2+n3)) mt[i][j] = nn;
            else{
                mt[i][j] = tong[k++];
            }
        }
    }
    for(int i = 0; i<3; ++i){
        for(int j = 0; j<nmt; ++j)
            cout << mt[i][j] << " ";
        cout << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BTCB091.INP", "r", stdin);
    freopen("BTCB091.OUT", "w", stdout);
    int n1,n2,n3;
    ma1 = nhap(n1);
    ma2 = nhap(n2);
    ma3 = nhap(n3);
    taomt(n1,n2,n3);
    return 0;
}
