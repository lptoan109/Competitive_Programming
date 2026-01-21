#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <direct.h> // Dùng cho Windows. Nếu Linux dùng <sys/stat.h>

using namespace std;

// --- PHẦN 1: THUẬT TOÁN CHUẨN (Để sinh file .OUT) ---
const int MAX_VAL = 20000005;
bool is_prime[MAX_VAL];

void sieve() {
    fill(is_prime, is_prime + MAX_VAL, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAX_VAL; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAX_VAL; j += i)
                is_prime[j] = false;
        }
    }
}

void solve(string inp_path, string out_path) {
    ifstream cin(inp_path);
    ofstream cout(out_path);

    int n, m;
    if (!(cin >> n >> m)) return;

    vector<long long> diff(n + 2, 0);
    for (int i = 0; i < m; ++i) {
        int l, r, v;
        cin >> l >> r >> v;
        diff[l] += v;
        diff[r + 1] -= v;
    }

    int count = 0;
    long long current_val = 0;
    for (int i = 1; i <= n; ++i) {
        current_val += diff[i];
        if (current_val >= 0 && current_val < MAX_VAL) {
            if (is_prime[current_val]) count++;
        }
    }
    cout << count;
}

// --- PHẦN 2: SINH DỮ LIỆU NGẪU NHIÊN ---
long long randRange(long long l, long long r) {
    return l + rand() % (r - l + 1);
}

void make_test(int test_num, int n_max, int m_max, int v_max) {
    string folder = "Test" + (test_num < 10 ? string("0") : "") + to_string(test_num);
    _mkdir(folder.c_str());

    string inp = folder + "/KHOIPHUC.INP";
    string out = folder + "/KHOIPHUC.OUT";

    // Sinh file INP
    ofstream fout(inp);
    int n = randRange(n_max / 2, n_max);
    int m = randRange(m_max / 2, m_max);
    fout << n << " " << m << "\n";
    for (int i = 0; i < m; ++i) {
        int l = randRange(1, n);
        int r = randRange(l, n);
        int v = randRange(1, v_max);
        fout << l << " " << r << " " << v << "\n";
    }
    fout.close();

    // Chạy thuật toán chuẩn để sinh file OUT
    solve(inp, out);
    cout << "Successfully created " << folder << endl;
}

int main() {
    srand(time(0));
    cout << "Starting sieve... " << endl;
    sieve();
    cout << "Sieve done. Generating tests..." << endl;

    // Phân bổ Subtask
    for (int i = 1; i <= 10; ++i) make_test(i, 1000, 1000, 10);      // Sub 1
    for (int i = 11; i <= 20; ++i) make_test(i, 50000, 50000, 50);   // Sub 2
    for (int i = 21; i <= 30; ++i) make_test(i, 200000, 200000, 100); // Sub 3

    cout << "DONE! 30 tests are ready for Themis." << endl;
    return 0;
}
