#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

string solve(string s, int k, bool check) {
    int ans = s.length() - k;
    string res = "";
    for (char c : s) {
        while (ans > 0 && !res.empty() && (check ? res.back() < c : res.back() > c)) {
            res.pop_back();
            ans--;
        }
        res.push_back(c);
    }
    return res.substr(0, k);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("GACHSO.INP", "r", stdin);
    freopen("GACHSO.OUT", "w", stdout);

    int n; cin >> n;
    if (n == 0) return 0;

    string s = "";
    int cnt = 0, num = 2;
    while (cnt < n) {
        if (isPrime(num)) {
            s += to_string(num);
            cnt++;
        }
        num++;
    }
    cout << s << "\n\n";

    int tong = s.length();
    int res = (tong % 2 == 0) ? (tong / 2) : (tong / 2 + 1);
    int du = tong - res;

    cout << solve(s, du, 1) << "\n\n";
    cout << solve(s, du, 0) << endl;

    return 0;
}
