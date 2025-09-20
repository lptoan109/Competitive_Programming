#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void nhap(int &m){
    cin >> m;
    for(int i = 0; i<m; ++i){
        int data;
        cin >> data;
        v.push_back(data);
    }
}
void xuly(int m){
    int k = 0;
    for(int i = 0; i<m; ++i){
        int ln = max(v[i],v[i+1]), nn = min(v[i], v[i+1]);
        if(ln-nn==1 || ln-nn==8 || ln-nn==9){
            k++;
        }
    }
    cout << k;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int m;
    nhap(m);
    xuly(m);
    return 0;
}
