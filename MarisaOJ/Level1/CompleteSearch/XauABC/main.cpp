#include <bits/stdc++.h>
using namespace std;
int n;
string curs;
void dqnhiphan(int pos, char kt){
    if(pos>n){
        cout << curs << "\n";
        return;
    }
    for(char i = kt; i<='C'; ++i){

        curs.push_back(i);
        dqnhiphan(pos+1, i+1);
        curs.pop_back();
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    dqnhiphan(1, 'A');
    return 0;
}
