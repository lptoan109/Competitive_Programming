#include <bits/stdc++.h>
using namespace std;
string a,b, kq;
string addBinary() {
    string res = "";
    int i = a.size() - 1, j = b.size() - 1, carry = 0;
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        res = (char)(sum % 2 + '0') + res;
        carry = sum / 2;
    }
    return res;
}
string binaryToOctal(string bin) {
    while (bin.size() % 3 != 0) bin = "0" + bin;
    string res = "";
    string OctalDigits = "01234567";
    int gh = bin.size();
    for (int i = 0; i < gh; i += 3) {
        string group = bin.substr(i, 3);
        int val = 0;
        for (int j = 0; j < 3; j++) {
            val = val * 2 + (group[j] - '0');
        }
        res += OctalDigits[val];
    }
    return res;
}
string binaryToHex(string bin) {
    while (bin.size() % 4 != 0) bin = "0" + bin;
    string res = "";
    string hexDigits = "0123456789ABCDEF";
    int gh = bin.size();
    for (int i = 0; i < gh; i += 4) {
        string group = bin.substr(i, 4);
        int val = 0;
        for (int j = 0; j < 4; j++) {
            val = val * 2 + (group[j] - '0');
        }
        res += hexDigits[val];
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("SUM2.INP", "r", stdin);
    freopen("SUM2.OUT", "w", stdout);
    cin >> a >> b;
    string kq = addBinary();
    cout << kq << "\n" << binaryToOctal(kq) << "\n" << binaryToHex(kq);

    return 0;
}
