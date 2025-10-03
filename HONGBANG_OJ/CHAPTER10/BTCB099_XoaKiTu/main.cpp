#include <bits/stdc++.h>
using namespace std;
void xoa(string s,char kt){
    for(int i = 0; i<s.size(); ++i){
        if(s[i]==kt) s.erase(i,1);
    }
    cout << s;
}
int main()
{
    string s,t;
    char kt;
    while(getline(cin,t)){
        if(t.empty()) break;
        s+= t +"\n";
    }
    cin >> kt;
    xoa(s,kt);
    return 0;
}
