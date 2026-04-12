#include <bits/stdc++.h>
using namespace std;
int b,e;
queue<int> a;
void bfs(){
    int t = b;
    while(t!=e){
        a.push(t);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("GAME.INP", "r", stdin);
    freopen("GAME.OUT", "w", stdout);
    cin >> b >> e;
    if(b==e){
        cout << 0;
        return 0;
    }

    return 0;
}
