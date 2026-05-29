#include <bits/stdc++.h>
using namespace std;
bool check(int so){
    if(so==2 || so==3) return true;
    if(so<2 || so%2==0 || so%3==0) return false;
    for(int i = 5; i*i<=so; i+=6){
        if(so%i==0 || so%(i+2)==0) return false;
    }
    return true;
}
string s;
int kq1, kq2;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> s;
    //cout << (int)'0' << " " << (int)'9';
    //48 57
    int n = s.size();
    int i = 0;
    while(i<n){
        if((int)s[i]>=48 && (int)s[i]<=57){
            string t = "";
            while((int)s[i]>=48 && (int)s[i]<=57 && i<n){
                kq1++;
                t+=s[i];
                i++;
            }
            int so = stoi(t);
            if(check(so)){
                kq2 = max(kq2, so);
            }
            continue;
        }
        ++i;
    }
    cout << kq1 << "\n" << kq2;
    return 0;
}
