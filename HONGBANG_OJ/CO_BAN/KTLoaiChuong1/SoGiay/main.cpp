#include <iostream>
using namespace std;

int main()
{
    long long d,h,m,s;
    cin >> d >> h >> m >> s;
    cout << d*86400+h*3600+m*60+s;
    return 0;
}
