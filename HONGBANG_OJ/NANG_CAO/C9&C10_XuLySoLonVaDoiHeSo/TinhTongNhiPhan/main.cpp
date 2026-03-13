#include<bits/stdc++.h>
using namespace std;
string binaryToOctal(string bin) {
    // 1. Bổ sung số 0 vào đầu để độ dài chia hết cho 3
    while (bin.length() % 3 != 0) bin = "0" + bin;
    string res = "";
    string OctalDigits = "01234567";
    // 2. Duyệt từng nhóm 3 ký tự
    int gh = bin.size();
    for (int i = 0; i < gh; i += 3) {
        string group = bin.substr(i, 3);
        // Đổi nhóm 3 bit nhị phân sang số thập phân tạm thời
        int val = 0;
        for (int j = 0; j < 3; j++) {
            val = val * 2 + (group[j] - '0');
        }
        res += OctalDigits[val];
    }
    return res;
}
string binaryToHex(string bin) {
    // 1. Bổ sung số 0 vào đầu để độ dài chia hết cho 4
    while (bin.length() % 4 != 0) bin = "0" + bin;
    string res = "";
    string hexDigits = "0123456789ABCDEF";
    // 2. Duyệt từng nhóm 4 ký tự
    int gh = bin.size();
    for (int i = 0; i < gh; i += 4) {
        string group = bin.substr(i, 4);
        // Đổi nhóm 4 bit nhị phân sang số thập phân tạm thời
        int val = 0;
        for (int j = 0; j < 4; j++) {
            val = val * 2 + (group[j] - '0');
        }
        res += hexDigits[val];
    }
    return res;
}

string a, b;
string sum(int n){
    string kq = "";
    int nho =0;
    int i = n-1;
    while(i>=0 || nho){
        int sum = nho;
        if(i>=0) sum += (a[i]-'0') + (b[i]-'0');
        kq = (char)(sum%2+'0') + kq;
        nho = sum/2;
        i--;
    }
    return kq;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("SUM2.INP", "r", stdin);
    freopen("SUM2.OUT", "w", stdout);
    cin >> a >> b;
    int n = a.size();
    //cout << n << "\n";
    string kq2 = sum(n);
    cout << kq2 << "\n\n" << binaryToOctal(kq2) << "\n\n" << binaryToHex(kq2);

    return 0;
}
