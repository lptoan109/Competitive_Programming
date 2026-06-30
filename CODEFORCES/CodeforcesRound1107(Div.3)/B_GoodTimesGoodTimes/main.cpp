#include <bits/stdc++.h>
using namespace std;
bool check(long long k){
    map<int, int> cnt;
    while(k>0){
        cnt[k%10]++;
        k/=10;
    }
    return cnt.size()<=2;
}
int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        for(int i= 2; i<=(int)1e9; ++i){
            if(check(1LL*i) && check(1LL*i*x)){
                cout << i << "\n";
                break;
            }
        }
    }
    return 0;
}
