#include <bits/stdc++.h>
using namespace std;
int n,m,k,x;
string s;
vector<char> a(505);
vector<vector<char>> kq;
void sub1(){
    for(int i = 0; i<n; ++i){
        if(a[i]=='#'){
            string t;
            cin >> t;
            for(int j = 0; j<k; ++j){
                a[i] = t[j];
                kq.push_back(a);
            }
        }
    }
   sort(kq.begin(), kq.end());
   for(int i = 0; i<n; ++i){
        cout << kq[x-1][i];
   }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("MATTHU.INP", "r", stdin);
    freopen("MATTHU.OUT", "w", stdout);
    cin >> n >> m >> k >> x >> s;
    for(int i = 0; i<n; ++i) a[i] = s[i];
    sub1();
//    if(m==1){
//        sub1();
//        return 0;
//    }
    return 0;
}
