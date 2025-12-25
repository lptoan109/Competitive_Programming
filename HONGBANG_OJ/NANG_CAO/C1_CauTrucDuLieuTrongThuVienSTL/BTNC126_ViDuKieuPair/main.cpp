#include<bits/stdc++.h>
using namespace std;
bool compare(pair<string,double> a, pair<string,double>b){
    if(a.second==b.second) return a.first < b.first;
    return a.second > b.second;
}
double trans(string t){
    int sl = t.size();
    double so = t[0]-'0';
    for(int i = 1; i<sl; ++i){
        so*=10+(t[i]-'0');
    }
    return so;
}
vector<pair<string, double>> ds;
string ten, tam;
double diem;
int n;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    while(n--){
        getline(cin,tam);
        int slktcl = ten.find('-'), sl = tam.size();
        ten = tam.substr(0,slktcl-1);
        string diemt = tam.substr(slktcl+1,sl-slktcl-1);
        diem = trans(diemt);
        cout << ten<< " " << diem << "\n";
        ds.push_back(make_pair(ten,diem));
    }
    sort(ds.begin(),ds.end(),compare);
    for(auto &i:ds){
        cout << i.first << " - " << i.second << "\n";
    }
}
