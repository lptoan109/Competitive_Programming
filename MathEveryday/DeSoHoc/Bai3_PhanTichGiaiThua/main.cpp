#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
bool notsnt[MAXN+5];
vector<int> v;
void sang(int n){
    for(int i = 2; i<=n; ++i){
        if(!notsnt[i]){
            v.push_back(i);
            for(int j = i*i; j<=n; j+=i){
                notsnt[j] = true;
            }
        }
    }
}
int n;
bool fi = true;
int main()
{
    scanf("%d", &n);
    sang(n);
    for(int i:v){
        long long t = i, d = 0;
        while(t<=n){
            d+=(n/t);
            t*=i;
        }
        if(!fi) printf(" * ");
        printf("%d^%lld", i, d);
        fi = false;
    }
    return 0;
}
