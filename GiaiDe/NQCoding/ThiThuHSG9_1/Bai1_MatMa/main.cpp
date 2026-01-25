#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e7;
int tcs(int k){
    long long s = 0;
    while(k>0){
       s+=k%10;
       k/=10;
    }
    return s;
}
vector<int> snt;
bool kosnt[MAXN+5];
int solution(int a, int limit){
    int kq=0;
    kosnt[0] = kosnt[1] = true;
    for(long long i = 2; i*i<=MAXN; ++i){
        if(kosnt[i]==false){
            for(long long j=i*i; j<=MAXN; j+=i){
                kosnt[j] = true;
            }
        }
    }
    for(int i = a; i<=limit; ++i){
        if(kosnt[i]==false){
            snt.push_back(i);
        }
    }
    for(int i:snt){
        long long t = tcs(i);
        if(kosnt[t]==false) kq++;
    }
    return kq;
}
int a,b;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("MATMA.INP", "r", stdin);
    freopen("MATMA.OUT", "w", stdout);
    cin>>a>>b;
    cout << solution(a,b);
    return 0;
}
