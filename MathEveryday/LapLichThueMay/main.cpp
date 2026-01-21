#include <bits/stdc++.h>
using namespace std;
struct event{
    int time;
    int type;
};
bool compare(event a, event b){
    if(a.time == b.time) return a.type<b.type;
    return a.time < b.time;
}
int n, kq = -1, cnt;
int main()
{
    freopen("NHAP.INP", "r", stdin);
    scanf("%d", &n);
    vector<event> a;
    for(int i = 0; i<n; ++i){
        int b,e;
        scanf("%d %d", &b, &e);
        a.push_back({b,1});
        a.push_back({e,2});
    }
    sort(a.begin(), a.end(), compare);
    for(auto &i:a){
        if(i.type == 1) cnt++;
        else cnt--;
        kq = max(kq, cnt);
    }
    printf("%d", kq);
    return 0;
}
