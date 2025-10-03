#include <bits/stdc++.h>
using namespace std;

int main() {
    string line;
    while (getline(cin, line))
    {
        stringstream ss(line);
        string tu, cnt;
        while (ss >> tu) {
            if (!cnt.empty()) cnt += ' ';
            cnt += tu;
        }
        if (!cnt.empty()) {
            cout << cnt << '\n';
        }
    }
    return 0;
}
