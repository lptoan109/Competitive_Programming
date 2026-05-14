#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100;
int a[MAXN+5][MAXN+5], n , m, bdj, bdi, dd[6] = {-1, 0, 1, 0}, dc[6] = {0, 1, 0, -1};
int init(char t){
    if(t=='#') return 1;
    if(t=='G') return 2;
    if(t=='a') return 3;
    if(t=='A') return 6;
    if(t=='b') return 4;
    if(t=='B') return 7;
    if(t=='c') return 5;
    if(t=='C') return 8;
}
bool k1, k2, k3;
long long cnt[MAXN+5][MAXN+5], kq;
#define fi first
#define se second
queue<pair<int, int>> que;
void bfs(){
    que.push({bdi, bdj});
    while(!que.empty()){
        int x = que.front().fi, y = que.front().se;
        que.pop();
        if(a[x][y]==1) continue;
        for(int i = 0; i<4; ++i){
            for(int j = 0; j<4; ++j){
                int nx = x+dd[i];
                int ny = y+dc[j];
                if(a[nx][ny]==1) continue;
                if(a[nx][ny]==2){
                    kq = cnt[x][y]+1;
                    return;
                }
                if(a[nx][ny]==3){
                    k1 = true;
                    cnt[nx][ny] = cnt[x][y]+1;
                }
                if(a[nx][ny]==6){
                    if(k1) cnt[nx][ny] = cnt[x][y]+1;
                    else continue;
                }
                if(a[nx][ny]==4){
                    k2 = true;
                    cnt[nx][ny] = cnt[x][y]+1;
                }
                if(a[nx][ny]==7){
                    if(k2) cnt[nx][ny] = cnt[x][y]+1;
                    else continue;
                }
                if(a[nx][ny]==5){
                    k3 = true;
                    cnt[nx][ny] = cnt[x][y]+1;
                }
                if(a[nx][ny]==8){
                    if(k3) cnt[nx][ny] = cnt[x][y]+1;
                    else continue;
                }
                a[nx][ny] = 1;
                que.push({nx, ny});
            }
        }
    }
    kq = -1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=m; ++j){
            char t;
            cin >> t;
            if(t=='S'){
                bdi = i;
                bdj = j;
                a[i][j] = 1;
                continue;
            }
            a[i][j] = init(t);
        }
    }
    bfs();
    cout << kq;
    return 0;
}
