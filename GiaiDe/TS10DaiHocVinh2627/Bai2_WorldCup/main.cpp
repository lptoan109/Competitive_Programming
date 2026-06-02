#include <bits/stdc++.h>
using namespace std;
int n, kq;
int main()
{
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        int cnt = 0;
        for(char i:s){
            if(i!='W'){
                kq = max(kq, cnt);
                cnt = 0;
            }
            else cnt++;
        }
        kq = max(kq, cnt);
        cnt = 0;
        for(char i:s){
            if(i!='D'){
                kq = max(kq, cnt);
                cnt = 0;
            }
            else cnt++;
        }
        kq = max(kq, cnt);
        cnt = 0;
        for(char i:s){
            if(i!='L'){
                kq = max(kq, cnt);
                cnt = 0;
            }
            else cnt++;
        }
        kq = max(kq, cnt);
    }
    cout << kq;
    return 0;
}
