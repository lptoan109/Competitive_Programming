#include <bits/stdc++.h>

using namespace std;
#define ll long long

void readSet(set<int>& s) {
    string line;
    getline(cin, line);
    stringstream ss(line);
    int num;
    while (ss >> num) {
        s.insert(num);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    set<int> A, B;

    readSet(A);

    string blank;
    getline(cin, blank);

    readSet(B);

    set<int> C = A;
    C.insert(B.begin(), B.end());

    set<int> D;
    for (int x : A) {
        if (B.count(x)) {
            D.insert(x);
        }
    }

    for (int x : C) {
        cout << x << " ";
    }
    cout << "\n\n";

    for (int x : D) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}
