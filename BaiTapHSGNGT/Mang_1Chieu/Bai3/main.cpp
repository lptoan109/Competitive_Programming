#include <bits/stdc++.h>
using namespace std;
int mt[2][3];
int main()
{
    for(int i = 0; i<2; ++i)
        for(int j = 0; j<3; ++j) cin >> mt[i][j];
    for(int i = 0; i<2; ++i){
        for(int j = 0; j<3; ++j)  cout << mt[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
