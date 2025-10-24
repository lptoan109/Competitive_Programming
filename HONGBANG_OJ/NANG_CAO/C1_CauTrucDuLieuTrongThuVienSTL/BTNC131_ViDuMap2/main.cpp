#include <bits/stdc++.h>

using namespace std;

bool compareGroups(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }
    if (a.empty() || b.empty()) {
        return a.size() < b.size();
    }
    return a[0] < b[0];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    map<string, vector<string>> groups;

    string word;
    while (cin >> word) {
        string key = word;
        sort(key.begin(), key.end());
        groups[key].push_back(word);
    }

    vector<vector<string>> sorted_groups;

    for (auto const& pair : groups) {
        sorted_groups.push_back(pair.second);
    }

    for (auto& group : sorted_groups) {
        sort(group.begin(), group.end());
    }

    sort(sorted_groups.begin(), sorted_groups.end(), compareGroups);

    for (const auto& group : sorted_groups) {
        if (!group.empty()) {
            cout << group[0];
        }

        for (size_t i = 1; i < group.size(); ++i) {
            cout << " " << group[i];
        }

        cout << "\n";
    }

    return 0;
}

