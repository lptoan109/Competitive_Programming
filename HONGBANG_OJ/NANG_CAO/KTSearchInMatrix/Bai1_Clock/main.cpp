#include <bits/stdc++.h>
using namespace std;
struct state{
    vector<int> clocks;
    string path;
    bool is_goal(){
        for (int x : clocks) if (x != 0) return false;
        return true;
    }
    string to_id(){
        string s = "";
        for(int x : clocks) s += (char)(x + '0');
        return s;
    }
};
int moves[10][10] = {
    {},
    {0, 1, 3, 4, -1},
    {0, 1, 2, -1},
    {1, 2, 4, 5, -1},
    {0, 3, 6, -1},
    {1, 3, 4, 5, 7, -1},
    {2, 5, 8, -1},
    {3, 4, 6, 7, -1},
    {6, 7, 8, -1},
    {4, 5, 7, 8, -1}
};
vector<int> apply_move(vector<int> c, int m_idx) {
    for(int i = 0; moves[m_idx][i] != -1; i++){
        int target = moves[m_idx][i];
        c[target] = (c[target] + 1) % 4;
    }
    return c;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CLOCK.INP", "r", stdin);
    freopen("CLOCK.OUT", "w", stdout);
    vector<int> start_clocks(9);
    string start_id = "";
    for(int i = 0; i < 9; i++){
        cin >> start_clocks[i];
        start_id += (char)(start_clocks[i] + '0');
    }
    queue<state> q;
    q.push({start_clocks, ""});
    unordered_map<string, bool> visited;
    visited[start_id] = true;
    while(!q.empty()){
        state curr = q.front();
        q.pop();
        if(curr.is_goal()){
            int len = curr.path.length();
            cout << len << "\n";
            for(int i = 0; i < len; i++){
                cout << curr.path[i] << (i == len - 1 ? "" : " ");
            }
            cout << "\n";
            return 0;
        }
        int last_move = (curr.path.empty() ? 1 : curr.path.back() - '0');
        for(int i = last_move; i <= 9; i++){
            int used = 0;
            for(char c : curr.path) if(c - '0' == i) used++;
            if(used < 3) {
                vector<int> next_clocks = apply_move(curr.clocks, i);
                string next_id = "";
                for(int x : next_clocks) next_id += (char)(x + '0');
                if(visited.find(next_id) == visited.end()){
                    visited[next_id] = true;
                    q.push({next_clocks, curr.path + (char)(i + '0')});
                }
            }
        }
    }
    return 0;
}
