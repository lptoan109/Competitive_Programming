#include <bits/stdc++.h>
using namespace std;
void dem(string s, char kt){
    stringstream ss(s);
    string tu;
    int d = 0;
    bool dt=false;
    while(ss>>tu){
        bool xh = false;
        d++;
        for(int i = 0; i<tu.size();++i)
            if(tu[i]==kt){
                xh = true;
                dt = true;
                break;
            }
        if(xh==true&&dt==true) cout << d << " ";
        tu = "";
    }
        if(dt==false) cout << " ";
}
int main()
{
    string s,t;
    char kt;
    while(getline(cin,t)){
        if(t=="") break;
        s+=t+"\n";
    }
    cin >> kt;
    dem(s,kt);
    return 0;
}
