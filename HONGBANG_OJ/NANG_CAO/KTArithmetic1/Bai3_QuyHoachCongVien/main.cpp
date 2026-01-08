#include <bits/stdc++.h>
using namespace std;
long long m,n, kq = 0;
struct answer{
    long long a;
    long long b;
    long long c;
    bool operator<(const answer& other) const {
        if (a != other.a) return a < other.a;
        if (b != other.b) return b < other.b;
        return c < other.c;
    }
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("PLANNING.INP", "r", stdin);
    freopen("PLANNING.OUT", "w", stdout);
    vector<answer> ans;
    cin >> m >> n;
    long long a,b,c;
    for(long long i = 2; i*i<=n; ++i){
        for(long long j = 1; j<i; j++){
            if(((i%2==0&&j%2!=0)||(i%2!=0&&j%2==0))&&gcd(i,j)==1){
                a = (i*i)-(j*j);
                b = 2*i*j;
                c = (i*i)+(j*j);
                long long x = min(a,b), y = max(a,b);
                long long nn = (m+x-1)/x, ln = n/y;
                for(long long k = nn; k<=ln; ++k){
                    long long ans_a = k*x, ans_b = k*y, ans_c = k*c;
                    ans.push_back({ans_a,ans_b,ans_c});
                    swap(ans_a,ans_b);
                    ans.push_back({ans_a,ans_b,ans_c});
                }
            }
        }
    }
    sort(ans.begin(), ans.end());
    for(auto &i:ans){
        cout << i.a << " " << i.b << " " << i.c << "\n";
    }
    return 0;
}
