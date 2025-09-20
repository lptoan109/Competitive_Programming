#include <bits/stdc++.h>
using namespace std;
void nhap(long long &n, long long &x, long long &y){
    cin >> n >> x >> y;
}
void xoanoc(long long n, long long x, long long y){
    double mt[n][n];
    long long so = 1;
    long long top = 0, bottom = n-1;
    long long left = 0, right = n-1;
    while(so < n*n) {
        for(long long j = left; j <= right && so < n*n; j++){
            mt[top][j] = so;
            so++;
        }
        top++;
        for(long long i = top; i <= bottom && so < n*n; i++){
            mt[i][right] = so;
            so++;
        }
        right--;
        for(long long j = right; j >= left && so < n*n; j--){
            mt[bottom][j] = so;
            so++;
        }
        bottom--;
        for(long long i = bottom; i >= top && so < n*n; i--){
            mt[i][left] = so;
            so++;
        }
        left++;
    }
    if(n%2==0) mt[n/2][n/2-1] = so++;
        else mt[n/2][n/2] = so++;
    cout << mt[x][y];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("MATRAN.INP", "r", stdin);
    freopen("MATRAN.OUT", "w", stdout);
    long long n,x,y;
    nhap(n,x,y);
    xoanoc(n,x,y);
    return 0;
}
