#include <bits/stdc++.h>
using namespace std;
long long n;
map<long long, int> cnt;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    while(n%2==0){
        cnt[2]++;
        n/=2;
    }
    for(long long i = 3; i*i<=n; i+=2){
        while(n%i==0){
            cnt[i]++;
            n/=i;
        }
    }
    if(n>1) cnt[n]++;
    if(cnt.size()==1){
        for(auto &i:cnt){
            cout << i.first << " " << i.second;
        }
    }
    else cout << 0;
    return 0;
}
