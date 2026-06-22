#include <bits/stdc++.h>
using namespace std;
char a, b;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b;
    int sta = (int)a, stb = (int)b;
    if(sta>=97 && sta<=122) sta-=32;
    if(stb>=97 && stb<=122) stb-=32;
    cout << max(max(sta, stb) - min(sta, stb)-1, 0);
    return 0;
}
