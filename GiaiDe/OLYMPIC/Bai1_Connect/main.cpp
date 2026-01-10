#include <bits/stdc++.h>
using namespace std;
bool compare(long long a, long long b){
    return a>b;
}
long long n;
vector<long long>a;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CONNECT.INP", "r", stdin);
    cin >> n;
    for(long long i = 0; i<n; ++i){
        long long x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end(), compare);
    for(long long i:a){
        cout << i;
    }

    return 0;
}
