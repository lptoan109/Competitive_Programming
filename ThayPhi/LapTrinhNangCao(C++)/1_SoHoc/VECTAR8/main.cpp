#include <bits/stdc++.h>
using namespace std;
const int MAXN = 10;
bool snt[MAXN+5];
int pf[MAXN+5];
bool check(int k){
    vector<int> s;
    while(k>0){
        s.push_back(k%10);
        k/=10;
    }
    //reverse(s.begin(), s.end());
    int cur = 0;
    for(int i:s){
        cur= cur*10+i;
        int tk = cur, temp = 0;
        while(tk>0){
            temp=(temp*10)+(tk%10);
            tk/10;
        }
        if(i==0 || snt[temp]) return false;
        cout << temp << " ";
    }
    return true;
}
void pre(){
    snt[0] = snt[1] = true;
    for(int i = 2; i*i<=MAXN; ++i){
        if(!snt[i]){
            for(int j = i*i; j<=MAXN; j+=i){
                snt[j] = true;
            }
        }
    }
    for(int i = 1; i<=MAXN; ++i){
        cout << i << " : ";
        if(!snt[i] && check(i)) pf[i]++;
        pf[i]+=pf[i-1];
        cout << "\n";
    }
}
int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    pre();
    cin >> t;
    while(t--){
        int r;
        cin >>r;
        cout << pf[r] << "\n";
    }
    return 0;
}
