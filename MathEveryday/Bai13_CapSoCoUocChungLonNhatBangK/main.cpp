#include<bits/stdc++.h>
using namespace std;
int n,k, max_val = INT_MIN;
map<long long, long long>cnt;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for(int i = 1; i<=n; ++i){
        int x;
        cin >>x;
        cnt[x]++;
        max_val = max(x,max_val);
    }
    vector <long long> kq(max_val+1);
    if(max_val<k){
        cout << 0;
        return 0;
    }
    for(int i = max_val; i>=k; i--){
        long long slv = 0;
        for(int j = i; j<=max_val; j+=i){
            slv+=cnt[j];
        }
        long long cv = slv*(slv-1)/2;
        for(long long j = 2*i; j<=max_val; j+=i){
            cv-=kq[j];
        }
        kq[i]=cv;
    }
    cout << kq[k];
    return 0;
}
