#include <bits/stdc++.h>
using namespace std;
long long l,r;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> l >> r;
    int limit = sqrt(r);
    vector<bool> notsmallprimes(limit+1, false);
    notsmallprimes[0] = notsmallprimes[1] = true;
    for(long long i = 2; i*i<=limit; i++){
        if(!notsmallprimes[i]){
            for(long long j = i*i; j<=limit; j+=i){
                notsmallprimes[j] = true;
            }
        }
    }
    vector<long long> smallprimes;
    for(long long i = 2; i<=limit;++i)
        if(!notsmallprimes[i])
            smallprimes.push_back(i);
    long long n = r-l+1;
    vector<bool> notprimes(n+1, false);
    for(long long i:smallprimes){
        long long start = (l+i-1)/i*i;
        if(start < i*i) start = i*i;
        for(long long j = start; j<=r; j+=i) notprimes[j-l] = true;
    }
    if(l==1) notprimes[0] = true;
    for(long long i = 0; i<n; ++i){
        if(!notprimes[i] && i+l>1) cout << i+l << " ";
    }
    return 0;
}
