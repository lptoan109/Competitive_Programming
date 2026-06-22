#include <bits/stdc++.h>
using namespace std;
int n;
string curs;
void dqnhiphan(int pos){
    if(pos>n){
        cout << curs << "\n";
        return;
    }
    for(char i = '0'; i<='1'; ++i){
        curs.push_back(i);
        dqnhiphan(pos+1);
        curs.pop_back();
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    dqnhiphan(1);
    return 0;
}
