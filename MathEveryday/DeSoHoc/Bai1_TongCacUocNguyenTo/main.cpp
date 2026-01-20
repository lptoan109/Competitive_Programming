#include <bits/stdc++.h>
using namespace std;
const int limit = 32000;
bool notsnt[limit+5];
vector <int> v;
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
long long kq;
int main()
{
    scanf("%d", &n);
    sang();
    for(int i:v){
        if(i>n) break;
        if(n%i==0){
            kq+=i;
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n>1) kq+=n;
    printf("%lld", kq);
    return 0;
}
