#include<bits/stdc++.h>
using namespace std;
struct point{
    int x, y;
};
bool onseg(){
    ;
}
bool check(){
    ;
}
int n, m;
map<int, vector<int>> dagiac;
vector<point> diem;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 1; i<=n; ++i){
        int x, y;
        cin >> x >> y;
        dagiac[x].push_back(y);
    }
    for(int i = 1; i<=m; ++i){
        int x, y;
        cin >> x, y;
        diem.push_back({x, y});
    }
    for(auto &i:dagiac){
        sort(i.second.begin(), i.second.end());
    }
    for(int i:diem){
        point da = {(int)-1e9, i.y}, db = {(int}1e9, i.y), dau, cuoi;
        int cnt = 0;
        for(auto &j:dagiac){
            if(j ==  dagiac.begin()){
                dau = {j.first, j.second.begin()};
                cuoi = {j.first, j.second.end()};
            }
            else{
                if(onseg(dau, cuoi, i)){
                    cout << "BOUNDARY\n";
                    goto dunglai;
                }
                if(check(dau, cuoi, da, db)) cnt++;
            }
            int nt = j.second.size();
            for(int k = 0; k<nt-1; ++k){
                point ta = {j.first, j.second[k]}, tb = {j.first, j.second[k+1]};
                if(onseg(ta, tb, i)){
                    cout << "BOUNDARY\n";
                    goto dunglai;
                }
                if(check(ta, tb, da, db)) cnt++;
            }
            dau = {j.first, j.second.begin()};
            cuoi = {j.first, j.second.end()};
        }
        if(cnt%2==0) cout << "INSIDE\n";
        else cout << "OUTSIDE\n";
        dunglai:
            continue;
    }
    return 0;
}
