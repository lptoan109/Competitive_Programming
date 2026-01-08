#include <bits/stdc++.h>
namespace fs = std::filesystem;
using namespace std;

// Cấu hình
const string TEST_DIR = "D:/Competitive_Programming/GiaiDe/HSGTPHCM2023/Bai2_MatThu/test"; // thư mục chứa test được tạo
const int NUM_TESTS = 100; // số lượng test

// Thiết lập bộ sinh số ngẫu nhiên
random_device rd;
mt19937 gen(rd());

long long random_range(long long min_val, long long max_val) {
    uniform_int_distribution<long long> dist(min_val, max_val);
    return dist(gen);
}

string generate_random_string(int length) {
    string chars = "abcdefghijklmnopqrstuvwxyz";
    string res = "";
    for (int i = 0; i < length; ++i) {
        res += chars[random_range(0, chars.length() - 1)];
    }
    return res;
}

// Hàm giải chính xác để sinh file OUT
void solve_internal() {
    // code giải
    return result;
}

void generate_test_data(int test_id, string &input_str, string &output_str) {
    // khai báo biến dùng trong bài
    if (test_id <= 30) {
        // random test
    }
    else if (test_id <= 50) {
        // random test
    }
    else {
        // random test
    }

    // Sinh Template

    // Sinh Options

}

int main() {
    try {
        if (fs::exists(TEST_DIR)) {
            fs::remove_all(TEST_DIR);
        }
        fs::create_directories(TEST_DIR);

        cout << "Dang sinh " << NUM_TESTS << " test cases..." << endl;

        for (int i = 1; i <= NUM_TESTS; ++i) {
            stringstream ss;
            ss << "Test" << setfill('0') << setw(2) << i;
            fs::path test_subdir = fs::path(TEST_DIR) / ss.str();
            fs::create_directories(test_subdir);

            string inp_content, out_content;
            generate_test_data(i, inp_content, out_content);

            ofstream inp_file(test_subdir / "MATTHU.INP");
            inp_file << inp_content;
            inp_file.close();

            ofstream out_file(test_subdir / "MATTHU.OUT");
            out_file << out_content;
            out_file.close();

            if (i % 10 == 0) cout << "Da sinh xong test " << i << endl;
        }
        cout << "Hoan tat sinh test." << endl;
    } catch (const exception& e) {
        cerr << "Loi: " << e.what() << endl;
    }

    return 0;
}
