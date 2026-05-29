#include <bits/stdc++.h>
using namespace std;
string s, s1, kq2;
int kq1;
bool ok;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // 97 , 122
    getline(cin, s);
    for(char i:s){
        if((int)i>=48 && (int)i<=57){
            kq1++;
        }
        if(i!=' ') s1+=i;
        if((int)i >= 97 && (int)i <=122) ok = true;
    }
    cout << kq1 <<"\n"<< s1 << "\n";
    if(!ok){
        cout << "NO";
        return 0;
    }
    int n = s1.size();
    int i, j;
    i = j = 0;
    while(i<n){
        string t = "";
        int cs = (int)s1[i];
        if(cs>=97 && cs<=122){
            j = i;
            while((int)s1[j]>=97 && s1[j]<=122 && j<n){
                t+=s1[j];
                j++;
            }
            i = j;
            if(t.size()>kq2.size()) kq2 = t;
            continue;
        }
        i++;
    }
    cout << kq2;
    return 0;
}
