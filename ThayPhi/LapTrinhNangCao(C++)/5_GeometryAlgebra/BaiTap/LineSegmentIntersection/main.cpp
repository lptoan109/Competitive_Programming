#include <bits/stdc++.h>
using namespace std;
struct point{
    long long x, y;
};
int ccw(point a, point b, point c){
    long long val = (b.x-a.x)*(c.y-a.y) - (b.y-a.y)*(c.x-a.x);
    if(val>0) return 1;
    if(val<0) return -1;
    return 0;
}
bool onseg(point a, point b, point c){
    return c.x>=min(a.x, b.x) && c.x<=max(a.x, b.x) &&
    c.y>=min(a.y, b.y) && c.y<=max(a.y, b.y);
}
bool check(point a, point b, point c, point d){
    int c1 = ccw(a, b , c);
    int c2 = ccw(a, b , d);
    int c3 = ccw(c, d , a);
    int c4 = ccw(c, d , b);
    if(c1*c2<0 && c3*c4<0) return true;
    if(c1==0 &&onseg(a, b , c)) return true;
    if(c2==0 && onseg(a, b, d)) return true;
    if(c3==0 && onseg(c, d, a)) return true;
    if(c4==0 && onseg(c, d, b)) return true;
    return false;
}
int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
        point a, b , c , d;
        cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y;
        if(check(a,b,c,d)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
