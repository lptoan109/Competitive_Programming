#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(int i = 0; i<=1000;++i){
        if(i%2==0){
            cout << setprecision(15) << round(sqrt(i)*100)/100 << " ";
        }
    }
    return 0;
}
