#include <bits/stdc++.h>
using namespace std;
int n,x[20];
bool h[20],c1[40],c2[40];
void xuat() {
    for (int i = 1; i <= n; i++) {
        cout << x[i] << " ";
    }
    cout << "\n";
}
void Try(int i) {
    for (int j = 1; j <= n; j++) {
        // Kiểm tra xem cột j và các đường chéo có bị ăn hay không
        if (!h[j] && !c1[i - j + n] && !c2[i + j]) {
            x[i] = j;           // Đặt quân hậu hàng i vào cột j

            // Đánh dấu trạng thái
            h[j] = true;
            c1[i - j + n] = true;
            c2[i + j] = true;

            if (i == n) {
                xuat();         // Đã đặt xong n quân hậu
            } else {
                Try(i + 1);     // Thử tiếp cho hàng i + 1
            }

            // QUAY LUI: Trả lại trạng thái ban đầu để thử các trường hợp khác
            h[j] = false;
            c1[i - j + n] = false;
            c2[i + j] = false;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n
    Try(1);
    return 0;
}
