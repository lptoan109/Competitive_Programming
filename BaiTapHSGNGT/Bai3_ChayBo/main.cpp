#include <bits/stdc++.h>
using namespace std;
long long t,ab,bc,ac;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> ab >> bc >> ac;
    long long a = ab, b = a+bc, c = b+ac;
    cin >> t;
    if(t<a){
        cout << "AB";
        return 0;
    }
    if(t>=a&&t<b){
        cout << "BC";
        return 0;
    }
    if(t>=b){
        cout << "AC";
        return 0;
    }
    return 0;
}
