#include <bits/stdc++.h>
using namespace std;
long long n;
void sub1(){
    long long k = n+1;
    while(1){
        long long t = 1;
        for(long long i = 2; i*i<k; ++i){
            if(k%i!=0){
                continue;
            }
            if(k%i==0){
                t+=i;
                if(i!=k/i) t+=k/i;
            }
            if(t>k){
                cout << k;
                return;
            }
        }
        if(t>k){
            cout << k;
            return;
        }
        k++;
    }
}
const int target = 1e7;
bool cp[target+5];
vector <int> p;
void sang(){
    cp[0] = cp[1] = true;
    for(int i = 2; i*i<=target; ++i){
        if(!cp[i]){
            for(long long j = i*i; j<=target; j+=i){
                cp[j] = true;
            }
        }
    }
    for(int i = 2; i<=target; ++i){
        if(!cp[i]) p.push_back(i);
    }
}
void sub2(){
    long long k = n+1;
    while(1){
        long long tong = 1, temp = k;
        for(int i:p){
            if(i*i>k) break;
            if(temp%i==0){
                long long mu = 1, sum = 1;
                while(temp % i==0){
                    mu *=i;
                    sum+=mu;
                    temp/=i;
                }
                tong *=sum;
            }
        }
        if(temp >1) tong *=(temp+1);
        if(tong-k > k){
            cout << k;
            return;
        }
        k++;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("ANUM.INP", "r", stdin);
    freopen("ANUM.OUT", "w", stdout);
    cin >> n;
    if(n<=(long long)1e9) sub1();
    else{
        sang();
        sub2();
    }
    return 0;
}
