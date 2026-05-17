#include <bits/stdc++.h>
using namespace std;
bool check(int so){
    if(so<0 || so>9) return false;
    return true;

}
string s, kq;
void dungday(int so){
    kq = "";
    kq += so+'0';
    //cout << so << "\n";
    for(char i:s){
        if(i=='+') so++;
        if(i=='-') so--;
        //cout << so << "\n";
        if(check(so)){
            kq+=so+'0';
        }
        else{
            kq = "0";
            return;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> s;
    for(int i = 1; i<=9; ++i){
        dungday(i);
        if(kq!="0") break;
    }
    cout << kq;
    return 0;
}
