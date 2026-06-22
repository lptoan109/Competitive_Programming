#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5;
int a[MAXN+5], n;
long long k, l; // Nên dùng long long để tránh tràn số khi tính K * L

bool check(int m) {
    // Nếu m lớn hơn tổng số bài nghiên cứu hiện có, không thể đạt được
    if (m > n) return false;

    long long total_needed = 0;

    // Chỉ cần kiểm tra m phần tử lớn nhất (từ index 1 đến m sau khi sort giảm dần)
    for (int i = 1; i <= m; ++i) {
        if (a[i] >= m) {
            continue; // Đã đủ điều kiện, không cần viết thêm trích dẫn
        }

        long long need = m - a[i];

        // Mỗi bài nghiên cứu chỉ được trích dẫn tối đa 1 lần bởi 1 bài báo mới,
        // do đó tối đa chỉ được tăng thêm K đơn vị.
        if (need > k) {
            return false;
        }

        total_needed += need;
    }

    // Tổng số lượt trích dẫn cần thêm không được vượt quá tổng giới hạn K * L
    return total_needed <= k * l;
}

void binsearch() {
    int left = 0, right = n, kq = 0;
    while (left <= right) {
        int m = left + (right - left) / 2;
        if (check(m)) {
            kq = m;
            left = m + 1; // Tìm kết quả lớn hơn
        } else {
            right = m - 1;
        }
    }
    cout << kq;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k >> l;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    // Sắp xếp giảm dần để ưu tiên các bài có trích dẫn cao sẵn
    sort(a + 1, a + 1 + n, greater<int>());

    binsearch();
    return 0;
}
