#include <bits/stdc++.h>
using namespace std;
long long k;
//long long binL(long long a,long long l, long long r){
//    long long kq = 0;
//    while(l<=r){
//        long long m = l+(r-l)/2;
//        if(a*m<=k){
//            kq = m;
//            l = m+1;
//        }
//        else r=m-1;
//    }
//    return kq;
//}
//long long binN(long long a,long long l, long long r){
//    long long kq = 0;
//    while(l<=r){
//        long long m = l+(r-l)/2;
//        if(a*m<=k){
//            kq = m;
//            r = m-1;
//        }
//        else if(a*m!=k){
//            l=m+1;
//        }
//    }
//    return kq;
//}
long long kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("ProblemE.INP", "r", stdin);
    freopen("ProblemE.OUT", "w", stdout);
    cin >> k;
    for(long long i = 1; i*i<=k; ++i){
//        long long r = binL(i,i+1,k);
//        long long l = binN(i,i+1,r);
//        cout<< i << " : " << l << " " << r << "  ";
//        for(int j = l; j<=r; ++j){
//            cout << j << " ";
//        }
//        cout << "\n\n";
        long long b = k/i;
        if(b>0) kq+=(b-i);
    }
    cout << kq;
    return 0;
}
