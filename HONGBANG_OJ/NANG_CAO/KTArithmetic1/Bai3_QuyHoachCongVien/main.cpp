#include <bits/stdc++.h>
using namespace std;
long long m,n, kq = 0;
struct answer{
    long long a;
    long long b;
    bool operator<(const answer& other) const {
        if (a != other.a) return a < other.a;
        if (b != other.b) return b < other.b;
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
    long long a,b;
    for(long long i = 2; i<=sqrt(2*n); ++i){
        for(long long j = 1; j<i; j++){
            if(((i%2==0&&j%2!=0)||(i%2!=0&&j%2==0))&&gcd(i,j)==1){
                a = (i*i)-(j*j);
                b = 2*i*j;
                long long k = 1;
                while(a*k<=n&&b*k<=n){
                    long long ans_a = k*a, ans_b = k*b;
                    if(ans_a>m&&ans_b>m){
                        ans.push_back({ans_a,ans_b});
                        if(ans_a!=ans_b) ans.push_back({ans_b,ans_a});
                    }
                    k++;
                }
            }
        }
    }
    sort(ans.begin(), ans.end());
    for(auto &i:ans){
        cout << i.a << " " << i.b << " " << sqrt((i.a*i.a)+(i.b*i.b)) << "\n";
    }
    return 0;
}
