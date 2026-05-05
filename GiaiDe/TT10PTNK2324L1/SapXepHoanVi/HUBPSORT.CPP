#include <bits/stdc++.h>
using namespace std;
int n, kq, a[55];
vector<pair<int, int>> kqv;
void daonguoc(int i, int j){
    vector<int> t;
    for(int k = j; k>=i; --k){
        t.push_back(a[k]);
    }
    int d = 0;
    for(int k = i; k<=j; ++k){
        a[k] = t[d++];
    }
}
bool check(){
    for(int i = 1; i<n; ++i){
        if(a[i-1]>a[i]) return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("HUBPSORT.INP", "r", stdin);
    freopen("HUBPSORT.OUT", "w", stdout);
    cin >> n;
    for(int i = 0; i<n; ++i){
        cin >> a[i];
    }
    while(!check()){
        int kqi = 0, dur = 0;
        for(int i = 0; i<n; ++i){
            int temp = 0, j = i+1;
            while(a[i]>a[j] && j<n){
                j++;
                temp++;
            }
            if(dur<temp){
                dur = temp;
                kqi = i;
            }
        }
        daonguoc(kqi, kqi+dur);
        kq++;
        kqv.push_back({kqi, kqi+dur});
        //cout << kqi << " " << kqi+dur << " : ";
        //for(int i:a) cout << i << " ";
        //cout << "\n";
    }
    cout << kq << "\n";
    for(pair<int, int> i:kqv){
        cout << i.first << " " << i.second << "\n";
    }
    return 0;
}
