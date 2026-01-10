#include <bits/stdc++.h>
using namespace std;
struct vdv{
    string ten;
    string qg;
    int diem;
};
bool compare(struct a, struct b){
    return a.diem<b.diem;
    return a.qg>b.qg;
}
long long n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    vector<vdv> a;
    for(int i = 0; i<n; ++i){
        int diem;
        string qg, ten;
        cin >> ten >> qg >> diem;
        a.push_back({ten, qg, diem});
    }
    stable_sort(a.begin(), a.end(), compare);
    for(auto &i :a){
        cout << i.ten << i.qg << i.qg;
    }
    return 0;
}
