#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x =0;
    cin >> n;
    cin.ignore();
    for(int i = 0; i<n; ++i){
        string cl;
        getline(cin, cl);
        if(cl[0]=='+'||cl[1]=='+'||cl[2]=='+') x++;
        else if(cl[0]=='-'||cl[1]=='-'||cl[2]=='-') x--;
    }
    cout << x;
    return 0;
}
