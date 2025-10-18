#include<bits/stdc++.h>
using namespace std;
vector<pair <string,double>> cap;
void nhap(int n){
    for(int i = 0; i<n; ++i){
        string t;
        getline(cin, t);
        int sl = t.size(), vt = t.rfind('-',sl-1);
        string ten = t.substr(0,vt-1), die = t.substr(vt+2,sl-(vt+2));
        double diem = stod(die);
        cap.push_back(make_pair(ten,diem));
    }
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    nhap(n);
    sort(cap.begin(), cap.end(), [](const pair<string,double> a, const pair<string,double> b){
        if(a.second==b.second) return a.first < b.first;
        return a.second>b.second;
    });
    for(int i = 0; i<n; ++i) cout << cap[i].first << " - " << cap[i].second << "\n";
}
