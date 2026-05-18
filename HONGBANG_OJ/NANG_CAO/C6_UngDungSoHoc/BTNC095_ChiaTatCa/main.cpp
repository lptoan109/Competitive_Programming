#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(a==0 || b == 0) return max(a,b);
    while(b>0){
        a%=b;
        swap(a, b);
    }
    return a;
}
vector <int> a;
int kq;
bool check;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DIVALL.INP", "r", stdin);
    freopen("DIVALL.OUT", "w", stdout);
    cin >> kq;
    a.push_back(kq);
    int t;
    while(cin >> t){
        kq = gcd(kq, t);
        a.push_back(t);
    }
    for(int i:a){
        if(i==kq){
            check = true;
        }
    }
    if(check) cout << kq;
    else cout << -1;
    return 0;
}
