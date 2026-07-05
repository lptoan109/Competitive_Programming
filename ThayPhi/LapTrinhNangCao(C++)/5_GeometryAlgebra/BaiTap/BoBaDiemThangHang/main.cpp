#include<bits/stdc++.h>
using namespace std;
struct point{
    int x,y;
};
bool check(point a, point b, point k){
    int t1 = b.y-a.y;
    int t2 = a.x-b.x;
    int t3 = a.x*b.y - a.y*b.x;
    return t1*k.x + t2*k.y + t3 == 0;
}
int n;
long long kq;
vector<point> a;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        int x, y;
        cin >> x >> y;
        a.push_back({x,y});
    }
    for(int i = 0; i<n-2; ++i){
        for(int j = i+1; j<n-1; ++j){
            for(int k = j+1; k<n; ++k){
                if(check(a[i], a[j], a[k])) kq++;
            }
        }
    }
    cout << kq;
    return 0;
}
