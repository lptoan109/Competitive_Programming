#include <bits/stdc++.h>

using namespace std;

bool kiemTraTIN(const string& sub) {
    string target = "TIN";
    int vi_tri_target = 0;

    for (char ky_tu : sub) {
        if (vi_tri_target == target.length()) {
            break;
        }
        if (ky_tu == target[vi_tri_target]) {
            vi_tri_target++;
        }
    }

    return (vi_tri_target == target.length());
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("DEMDOANCON.INP", "r", stdin);
    freopen("DEMDOANCON.OUT", "w", stdout);

    string S;
    cin >> S;

    int N = S.length();
    long long dem = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = i; j < N; ++j) {
            string doan_con = S.substr(i, j - i + 1);
            if (kiemTraTIN(doan_con)) {
                dem++;
            }
        }
    }

    cout << dem << endl;

    return 0;
}
