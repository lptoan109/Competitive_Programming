#include <bits/stdc++.h>
using namespace std;
const int limit = 32000;
int q;
bool notsnt[limit+5];
vector<int> snt;
void sang(){
    for(int i = 2; i<=limit; ++i){
        if(!notsnt[i]){
            snt.push_back(i);
            for(int j = i*i; j<=limit; j+=i){
                notsnt[j] = true;
            }
        }
    }
}
int cnt(int n){
    int kq = 1, d = 0;
    for(int i:snt){
        d = 0;
        if(i*i>n) break;
        if(n%i==0){
            while(n%i==0){
                d++;
                n/=i;
            }
            kq*=(d+1);
        }
    }
    if(n>1) kq*=2;;
    return kq;
}
int main()
{
    freopen("NHAP.INP", "r", stdin);
    scanf("%d", &q);
    sang();
    while(q--){
        int x;
        scanf("%d", &x);
        printf("%d\n", cnt(x));
    }
    return 0;
}
