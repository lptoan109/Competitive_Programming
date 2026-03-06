#include <bits/stdc++.h>
using namespace std;
long long n;
vector<long long >a;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 0; i<n; ++i){
        long long x;
        cin >> x;
        a.push_back(x);
    }
    stable_sort(a.begin(), a.end());
    for(long long i:a){
        cout << i << " ";
    }
    return 0;
}
