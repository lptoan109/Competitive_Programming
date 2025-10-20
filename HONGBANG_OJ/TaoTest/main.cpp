#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("BTNC121_test1e6.OUT","w",stdout);
    int m = 1e6, n = 1e6;
    cout << m << " " << n << "\n";

    // Sinh mảng A: số ngẫu nhiên từ 1 đến 1e6
    for (int i = 0; i < m; ++i) {
        cout << rand() % 1000000 + 1 << " ";
    }
    cout << "\n";

    // Sinh mảng B: gồm cả số có trong A và không có
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0)
            cout << rand() % 1000000 + 1 << " "; // có thể trùng với A
        else
            cout << rand() % 1000000 + 1000001 << " "; // chắc chắn không có trong A
    }
    cout << "\n";

    return 0;
}
