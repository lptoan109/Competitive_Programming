#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int n;
long long kq;
bool hashm{MAXN+5};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        for(int j = i; j>=1; j-=i){
            if(!hashm[j]) kq+=j;
        }
    }
    return 0;
}
