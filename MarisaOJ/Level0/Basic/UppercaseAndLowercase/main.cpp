#include <bits/stdc++.h>
using namespace std;
char c;
int main()
{
    cin >> c;
    //cout << (int)'a' << " " << (int)'z' << "\n" << (int)'A' << " " << (int)'Z';
    int st = (int)c;
    if(st>=97 && st<=122) cout << (char)(st-32);
    else cout << (char)(st+32);
    return 0;
}
