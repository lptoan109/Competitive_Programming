#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    string tu;
    for(int i = 1; i<=n; ++i){
        getline(cin, tu);
        int sl = tu.size();
        if(sl>10){
            cout << tu[0] << sl-2 << tu[sl-1] << "\n";
        }
        else cout << tu << "\n";
    }
    return 0;
}
