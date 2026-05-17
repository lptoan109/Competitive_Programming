#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

const long long INF = 1e18;
int dp[105];
int weights[] = {1, 2, 5, 10, 15, 20};

// Khởi tạo quy hoạch động cho các giá trị nhỏ
void init_dp() {
    for (int i = 1; i <= 100; i++) dp[i] = 1e9;
    dp[0] = 0;
    for (int w : weights) {
        for (int i = w; i <= 100; i++) {
            dp[i] = min(dp[i], dp[i - w] + 1);
        }
    }
}

// Hàm tính số đĩa ít nhất để đạt khối lượng X
long long get_min_plates(long long X) {
    if (X < 0) return INF;
    if (X <= 60) return dp[X];

    // Nếu X lớn, tham lam lấy các đĩa 20kg trước
    long long num_20 = (X - 60) / 20 + 1;
    long long remain = X - num_20 * 20;

    return num_20 + dp[remain];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DBELL.INP", "r", stdin);
    freopen("DBELL.OUT", "w", stdout);
    int n;
    fin >> n;

    vector<long long> p(n + 1);
    vector<long long> S(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        fin >> p[i];
        S[i] = S[i - 1] + p[i]; // Mảng cộng dồn
    }

    long long w;
    fin >> w;

    init_dp();

    long long min_ops = INF;

    // Duyệt qua số lượng đĩa k được giữ lại (từ trong cùng ra)
    for (int k = 0; k <= n; k++) {
        long long current_weight = S[k];
        long long needed_weight = w - current_weight;

        long long plates_to_add = get_min_plates(needed_weight);

        if (plates_to_add != INF) {
            long long total_ops = (n - k) + plates_to_add;
            min_ops = min(min_ops, total_ops);
        }
    }

    fout << min_ops << "\n";

    fin.close();
    fout.close();
    return 0;
}
