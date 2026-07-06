#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int kq[MAXN+5], t;
bool snt[MAXN+5];
bool check(int k){
    string s;
    while(k>0){
        if(k%10==0) return false;
        s+=(k%10+'0');
        k/=10;
    }
    reverse(s.begin(), s.end());
    int n = s.size();
    for(int i = 0; i<n; ++i){
        string t = s.substr(i, n-i);
        if(snt[stoi(t)]) return false;
    }
    return true;
}
void pre(){
    snt[0] = snt[1] = true;
    for(int i = 2; i*i<=MAXN; ++i){
        if(!snt[i]){
            for(int j = i*i; j<=MAXN; j+=i) snt[j] = true;
        }
    }
    for(int i = 1; i<=MAXN; ++i){
        if(!snt[i]){
            if(check(i)) kq[i]++;
        }
    }
    for(int i = 1; i<=MAXN; ++i) kq[i]+=kq[i-1];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    pre();
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << kq[n] << "\n";
    }
    return 0;
}
