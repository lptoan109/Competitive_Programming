#include <bits/stdc++.h>
using namespace std;
int q;
int dem(int n){
    int kq = 0;
    while(n>=5){
        n/=5;
        kq+=n;
    }
    return kq;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> q;
    while(q--){
        string s;
        cin >> s;
        int n = s.size();
        map<char, int> a;
        for(int i = 0; i<n; ++i){
            a[s[i]]++;
        }
        int kq = dem(n);
        for(auto &i:a){
            kq-=dem(i.second);
        }
        cout << kq << "\n";
    }
    return 0;
}
