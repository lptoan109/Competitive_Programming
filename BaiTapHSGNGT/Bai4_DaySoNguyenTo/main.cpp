#include <bits/stdc++.h>
using namespace std;
bool ktsnt(long long n){
    if(n<2) return false;
    for(int i = 2; i*i<=n; i+=2){
        if(n%i==0) return false;
    }
    return true;
}

long long n, t, sl=0, ln = -1;
vector <long long> snt;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> t;
        if(ktsnt(t)){
            sl++;
            ln = max(ln,t);
            snt.push_back(t);
        }
    }
    cout << sl << "\n" << ln << "\n";
    sort(snt.begin(), snt.end());
    for(auto &i:snt){
        cout << i << " ";
    }
    return 0;
}
