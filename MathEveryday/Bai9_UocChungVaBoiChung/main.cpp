#include <bits/stdc++.h>
using namespace std;
bool sophongphu(long long a){
    long long t = 0;
    for(long long i = 1; i*i<=a; ++i){
        if(a%i==0){
            if(a/i!=i) t+=i+a/i;
            else t+=i;
        }
    }
    t-=a;
    if(t>a) return true;
    return false;
}
long long a,b, ucln,bcnn;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b;
    ucln = gcd(a,b);
    bcnn = a*(b/ucln);
    cout << ucln << " " << bcnn << "\n";
    sophongphu(a)?cout << "YES":cout << "NO";
    return 0;
}
