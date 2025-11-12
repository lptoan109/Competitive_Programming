#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> a;
vector<vector<ll>> results;
ll t;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    while (cin >> t) {
        a.push_back(t);
    }
    int n = a.size();
    if (n < 3) {
        cout << 0 << "\n";
        return 0;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 2; ++i) {
        if (i > 0 && a[i] == a[i - 1]) {
            continue;
        }
        int left = i + 1;
        int right = n - 1;
        while (left < right) {
            ll sum = a[i] + a[left] + a[r  ight];
            if (sum == 0) {
                results.push_back({a[i], a[left], a[right]});
                while (left < right && a[left] == a[left + 1]) {
                    left++;
                }
                while (left < right && a[right] == a[right - 1]) {
                    right--;
                }
                left++;
                right--;
            }
            else if (sum < 0) left++;
            else right--;
        }
    }
    cout << results.size() << "\n";
    for (const auto& i : results) {
        cout << i[0] << " " << i[1] << " " << i[2] << "\n";
    }
    return 0;
}
