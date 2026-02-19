#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    return b == 0 ? a : gcd(b, a % b);
}
long long lcm(long long a, long long b){
    if(a == 0 || b == 0) return 0;
    return (a / gcd(a, b)) * b;
}
void solution(long long n1, long long l1, long long n2, long long l2, long long &len, long long &c1, long long &c2) {
    if(l1 == 0 || l2 == 0){
        len = 0; c1 = 0; c2 = 0;
        return;
    }
    long long common = lcm(l1, l2);
    long long max_l = min(n1 * l1, n2 * l2);
    len = (max_l / common) * common;
    if(len > 0){
        c1 = len / l1;
        c2 = len / l2;
    }
    else{
        c1 = 0; c2 = 0;
    }
}
long long X, Dx, D, Dd, T, Dt, V, Dv, w, h, nx, nt, nd, nv;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("COLOR.INP", "r", stdin);
    freopen("COLOR.OUT", "w", stdout);
    cin >> X >> Dx >> D >> Dd >> T >> Dt >> V >> Dv;
    solution(X, Dx, T, Dt, w, nx, nt);
    solution(D, Dd, V, Dv, h, nd, nv);
    long long area = w * h;
    if(area == 0) cout << 0;
    else{
        cout << area << "\n";
        cout << nx << " " << nd << " " << nt << " " << nv;
    }
    return 0;
}
