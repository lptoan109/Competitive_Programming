#include <bits/stdc++.h>
using namespace std;

int m, n, x, y;
int a[1005][1005];
bool visited[1005][1005];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

struct point {
    int r, c;
};

// Hàm BFS để tìm diện tích và danh sách các ô trong 1 miền
vector<point> bfs_find_region(int r, int c) {
    vector<point> res;
    queue<point> q;
    q.push({r, c});
    visited[r][c] = true;

    while(!q.empty()){
        point curr = q.front();
        q.pop();
        res.push_back(curr);

        for(int i = 0; i < 4; i++){
            int nr = curr.r + dx[i];
            int nc = curr.c + dy[i];
            if(nr >= 1 && nr <= m && nc >= 1 && nc <= n && a[nr][nc] == 1 && !visited[nr][nc]){
                visited[nr][nc] = true;
                q.push({nr, nc});
            }
        }
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("RABBIT.INP", "r", stdin);
    freopen("RABBIT.OUT", "w", stdout);

    if (!(cin >> m >> n >> x >> y)) return 0;

    // Đọc ma trận dưới dạng ký tự để tránh lỗi dính số
    for(int i = 1; i <= m; i++){
        string s; cin >> s;
        for(int j = 1; j <= n; j++){
            a[i][j] = s[j-1] - '0';
            visited[i][j] = false;
        }
    }

    vector<point> max_region;
    int max_size = -1;

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 1 && !visited[i][j]){
                vector<point> current_region = bfs_find_region(i, j);
                // Nếu diện tích bằng nhau, đề thường lấy miền gặp đầu tiên hoặc bất kỳ
                if((int)current_region.size() > max_size){
                    max_size = current_region.size();
                    max_region = current_region;
                }
            }
        }
    }

    if(max_size <= 0){
        cout << 0;
        return 0;
    }

    // Tìm khoảng cách Manhattan nhỏ nhất từ (x, y) tới bất kỳ ô nào trong max_region
    int min_dist = 2e9;
    for(auto &p : max_region){
        int d = abs(x - p.r) + abs(y - p.c);
        if(d < min_dist) min_dist = d;
    }

    // Kết quả S = 0 nếu hang nằm trên miền đó
    cout << min_dist << endl;

    return 0;
}
