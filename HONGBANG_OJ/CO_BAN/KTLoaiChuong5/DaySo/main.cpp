#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long x,k, d=0;
    cin >> x >> k;
    cout << x << " ";
    long long kq = 0, t;
    if(x<10) t=x*x;
    else t=x;
    while(d<k-2){
        if(d==0&& x<10) cout << t << " ";
        while(t>0){
            kq += pow((t%10),2);
            t/=10;
        }
        cout << kq << " ";
        t = kq;
        kq = 0;
        d++;
    }
    return 0;
}
