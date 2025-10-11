#include <bits/stdc++.h>
using namespace std;
bool sapxep(pair)
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    pair <string, double> kq[n+5];
    for(int i = 0; i<n; ++i){
        string t;
        getline(cin,t);
        int vt = t.size();
        int vtxh = t.rfind('-', vt-1);
        string ten = t.substr(0, vtxh-1);
        double diem = stod(t.substr(vtxh+1, vt-1));
        kq[i] = make_pair(ten,diem);
    }
    return 0;
}
