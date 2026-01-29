#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <direct.h> // Dùng cho Windows. Nếu Linux dùng <sys/stat.h>

using namespace std;

// --- PHẦN 1: THUẬT TOÁN CHUẨN (Để sinh file .OUT) ---
bool sub2(long long kq, string s, int gh){
    bool check = false;
    if(s[gh-1]=='0'||s[gh-1]=='5'){
        long long mod = 0;
        for(int j = 0; j<gh-1; ++j){
            mod = (mod+(s[j]-'0'))%5;
        }
        if(mod == 0) check = true;
    }
    return check;
}
void solve(string inp_path, string out_path) {
    ifstream cin(inp_path);
    ofstream cout(out_path);
    long long n, kq = 0;
    cin >> n;
    for(int i = 0; i<n; ++i){
        string s;
        cin >> s;
        int gh = s.size();
        if(sub2(kq,s,gh)) kq++;
    }
    cout << kq;
}

// --- PHẦN 2: SINH DỮ LIỆU NGẪU NHIÊN ---
long long randRange(long long l, long long r) {
    return l + rand() % (r - l + 1);
}

void make_test(int test_num) {
    string folder = "Test" + (test_num < 10 ? string("0") : "") + to_string(test_num);
    _mkdir(folder.c_str());

    string inp = folder + "/BAI1.INP";
    string out = folder + "/BAI1.OUT";

    // Sinh file INP
    ofstream fout(inp);
    int n = randRange(1, 100);
    int m = randRange(100000, 100000);
    fout << n << "\n";
    for (int i = 0; i < n; ++i){
        for(int j = 1; j<=m; ++j) fout << 5;
        fout << "\n";
    }
    fout.close();

    // Chạy thuật toán chuẩn để sinh file OUT
    solve(inp, out);
    cout << "Successfully created " << folder << endl;
}

int main() {
    // Phân bổ Subtask
    for (int i = 1; i <= 10; ++i) make_test(i);      // Sub 1

    cout << "DONE! 10 tests are ready for Themis." << endl;
    return 0;
}
