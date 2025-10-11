#include <bits/stdc++.h>

using namespace std;

string to_upper(string s) {
    for (char& c : s) {
        c = toupper(c);
    }
    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("XLDS.INP", "r", stdin);
    freopen("XLDS.OUT", "w", stdout);

    int n;
    cin >> n;
    cin.ignore();

    string ds[n];
    map<int, int> wc;
    string ln = "";

    for (int i = 0; i < n; ++i) {
        getline(cin, ds[i]);

        stringstream ss(ds[i]);
        string word;
        int count = 0;
        while (ss >> word) {
            count++;
        }
        wc[count]++;

        size_t pos = ds[i].rfind(' ');
        string ten_hien_tai;
        if (pos == string::npos) {
            ten_hien_tai = ds[i];
        } else {
            ten_hien_tai = ds[i].substr(pos + 1);
        }

        if (ten_hien_tai.length() > ln.length()) {
            ln = ten_hien_tai;
        }
    }

    for (auto const& [count, num] : wc) {
        cout << num << " ho ten co " << count << " tu\n";
    }

    cout << ln << "\n";

    string temp_ds[n];
    for (int i = 0; i < n; ++i) {
        size_t pos = ds[i].rfind(' ');
        string ten;
        string ho;
        if (pos == string::npos) {
            ten = ds[i];
            ho = ds[i];
        } else {
            ten = ds[i].substr(pos + 1);
            ho = ds[i].substr(0, pos);
        }
        temp_ds[i] = ten + " " + ho;
    }

    sort(ds, ds + n, [](const string& a, const string& b) {
        string ten_a, ho_a, ten_b, ho_b;

        size_t pos_a = a.rfind(' ');
        if(pos_a == string::npos) { ten_a = a; ho_a = a; }
        else { ten_a = a.substr(pos_a + 1); ho_a = a.substr(0, pos_a); }

        size_t pos_b = b.rfind(' ');
        if(pos_b == string::npos) { ten_b = b; ho_b = b; }
        else { ten_b = b.substr(pos_b + 1); ho_b = b.substr(0, pos_b); }

        if (ten_a != ten_b) {
            return ten_a < ten_b;
        }
        return ho_a < ho_b;
    });


    for (int i = 0; i < n; ++i) {
        cout << to_upper(ds[i]) << "\n";
    }

    return 0;
}
