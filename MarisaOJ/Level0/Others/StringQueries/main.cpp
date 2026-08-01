#include<bits/stdc++.h>
using namespace std;
char a[26][26][26][26][26];
int n;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        string s;
        cin >> s;
        int m = s.size();
        if(m==1) a[s[0]]++;
        if(m==2) a[s[0]][s[1]]++;
        if(m==3) a[s[0]][s[1]][s[2]]++;
        if(m==4) a[s[0]][s[1]][s[2]][s[3]]++;
        else a[s[0]][s[1]][s[2]][s[3]][s[4]]++;
    }
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        int m = s.size();
        if(m==1 && a[s[0]]==1)
    }
}
