#include <bits/stdc++.h>
using namespace std;
string s;
bool ok;
map<char, int> a;
void sub1(){
    string kq = "";
    for(char i:s){
        if(a.find(i)==a.end()){
            kq+=i;
        }
        a[i]++;
    }
    cout << kq;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> s;
    for(char i:s){
        if(i=='*') ok = true;
    }
    if(!ok){
        sub1();
        return 0;
    }
    else{
        int n = s.size();
        string kq = "";
        int i = 0;
        while(i<n){
            if(s[i]=='*'){
                while(s[i]=='*' && i<n){
                    i++;
                }
                if(i>n){
                    break;
                }
                a.clear();
            }
            if(a.find(s[i])==a.end()){
                kq+=s[i];
            }
            a[s[i]]++;
            i++;
        }
        cout << kq;
    }
    return 0;
}
