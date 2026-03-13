#include <bits/stdc++.h>
using namespace std;
//const int MAXN = 1e6;
int n,k;
void sub1(){
    int kq = 0;
    for(int i = 1; i<=n; ++i){
            for(int j = 1; j<=n; ++j){
                long long t = i+j;
                //cout << t << " ";
                if(t%k==0) kq++;
            }
            //cout << "\n";
        }
        cout << kq;
}
void sub2(){
    int kq = 0;
    for(int i = 1; i<n; ++i){
        if((i+1) % k == 0){
            kq+=i;
            //cout << i+1 << "\n";
        }
    }
    for(int i = 1; i<=n; ++i){
        if((n+i) %k == 0) kq+=(n-i+1);
    }
    cout << kq;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n  >> k;
    sub2();
    return 0;
    if(n<1000){
        sub1();
        return 0;
    }
    if(n<1000000){
        sub2();
        return 0;
    }
    return 0;
}
