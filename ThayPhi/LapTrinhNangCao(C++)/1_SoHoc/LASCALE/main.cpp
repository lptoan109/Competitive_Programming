#include <bits/stdc++.h>
using namespace std;
long long n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    long long t = n, temp = 0;
    while(t%3!=0){
        t+=temp;
        temp+=3;
    }
    cout << 1 << " " << temp << "\n";
    cout << 1 << " " << t;
    return 0;
}
