#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,ln = INT_MIN, nkq=0;
    cin >> k >> n;
    string a[2][k], kq[n];
    char bm[n];
    for(int i = 0; i<k; ++i) cin >> a[1][i];
    for(int i = 0; i<n; ++i){
        char b;
        cin >> b;
        bm[i] = b;
        for(int j = 0; j<k; ++j){
            string t = a[1][j];
            if(t[0]==b){
                int d = a[0][i];
                if(d<ln){
                    kq[nkq++] = t;
                    d++;
                }
                else if(d==ln){
                    string ta = (string)123;
                    for(int i = 0; i<k; ++i){
                        ta = min(ta, a[1][i]);
                    }
                    kq[nkq++] = ta;
                    d++;
                    ln = d;
                }
                a[0][i] = (string)d;
            }
        }
    }
    for(int i = 0; i<nkq; ++i){
        cout << kq[i];
    }
    return 0;
}
