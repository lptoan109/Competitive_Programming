#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5, limit = 1e6;
bool notsnt[limit+5];
vector<int> v;
void sang(){
    for(int i = 2; i<=limit; ++i){
        if(!notsnt[i]){
            v.push_back(i);
            for(int j = i*i; j<=limit; j+=i){
                notsnt[j] = true;
            }
        }
    }
}
int n;
long long a[MAXN+5], kq;
int main()
{
    sang();
    scanf("%d", &n);
    for(int i = 0; i<n; ++i){
        scanf("%lld", &a[i]);
    }
    for(int i = 0; i<n; ++i){
        for(int j:v){
            if(j*j>a[i]) break;
            if(j*j==a[i]) kq++;
        }
    }
    printf("%lld", kq);
    return 0;
}
