#include <bits/stdc++.h>
using namespace std;
string s;
long long n, sl0 = 0, sl1 = 0, t = 0, kq;
double pt0, pt1;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> s;
    for(int i = 0; i<n; ++i){
        if(s[i]=='0'){
            sl0++;
            t++;
            kq = max(t,kq);
        }
        else{
            sl1++;
            t = 0;
        }

    }
    pt0 = (double)sl0/n*100;
    pt1 = (double)sl1/n*100;
    cout << sl0 <<  " " << sl1<< "\n";
    cout << kq << "\n";
    cout << round(pt0*100)/100 << "% " << round(pt1*100)/100 << "%";
    return 0;
}
