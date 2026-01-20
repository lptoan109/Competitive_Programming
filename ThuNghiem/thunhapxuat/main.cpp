#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int a[MAXN+5], n;
int main()
{
    freopen("CALC.INP", "r", stdin);
    freopen("CALC.OUT", "w", stdout);
    scanf("%d", &n);
    for(int i = 0; i<n; ++i){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i<n; ++i){
        printf("%d ", a[i]);
    }
    return 0;
}
