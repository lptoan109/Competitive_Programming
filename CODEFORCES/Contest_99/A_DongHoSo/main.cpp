#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //freopen("TIMSO.INP", "r", stdin);
    //freopen("TIMSO.OUT", "w", stdout);

    int n;
    cin >> n;

    if (n % 2 == 1) {
        cout << '7';
        for (int i = 0; i < (n - 3) / 2; ++i) {
            cout << '1';
        }
    } else {
        for (int i = 0; i < n / 2; ++i) {
            cout << '1';
        }
    }
    return 0;
}
