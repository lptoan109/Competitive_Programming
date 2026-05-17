#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void nhap(int &n){
    cin >> n;
    for(int i = 0; i<n; ++i){
        int data;
        cin >> data;
        v.push_back(data);
    }
}
void xep(int n){
    sort(v.begin(), v.end(), greater<int>());
    long long s = 0;
    for(int i = 0; i<n; ++i){
        if((i + 1) % 3 != 0) s+=v[i];
    }
    cout << s;
}
int main()
{
    int n;
    nhap(n);
    xep(n);
    return 0;
}
