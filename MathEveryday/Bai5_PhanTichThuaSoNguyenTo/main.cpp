#include <bits/stdc++.h>
using namespace std;
long long n;
map <long long, long long> a;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(long long i = 2; i*i<=n; ++i){
        while(n%i==0){
            a[i]++;
            n/=i;
        }
    }
    if(n>1) a[n]++;
    bool firt = true;
    for(auto &i:a){
        if(!firt) cout << " * ";
        cout << i.first << "^" << i.second;
        firt = false;
    }
    return 0;
}
