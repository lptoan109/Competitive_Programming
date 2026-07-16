#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e7;
bool check[MAXN+5];
void pre(){
    check[0] = check[1] = true;
    for(int i = 2; i*i<=MAXN; ++i){
        if(!check[i]){
            for(int j = i*i; j<=MAXN; j+=i) check[j] = true;
        }
    }
}
string tostr(int k){
    string kq ="";
    while(k>0){
        kq+=(k%10+'0');
        k/=10;
    }
    reverse(kq.begin(), kq.end());
    return kq;
}
int n,k, cnt;
string s;
vector<char> kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    pre();
    cin >> n >> k;
    for(int i = 1; i<=MAXN; ++i){
        if(!check[i]){
            s += tostr(i);
            cnt++;
            if(cnt>=n) break;
        }
    }
    //cout << s << "\n";
    for(char i:s){
        while(!kq.empty() && k>0 && kq.back()<i){
            kq.pop_back();
            k--;
        }
        kq.push_back(i);
    }
    while(k--){
        kq.pop_back();
    }
    for(char i:kq) cout << i;
    return 0;
}
