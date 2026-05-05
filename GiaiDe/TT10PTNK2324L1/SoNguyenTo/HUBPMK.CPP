#include <bits/stdc++.h>
using namespace std;
bool check(string s){
    int so = stoi(s);
    if(so<2) return false;
    for(int i = 2; i*i<=so; ++i){
        if(so%i==0) return false;
    }
    return true;
}
int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("HUBPMK.INP", "r", stdin);
    freopen("HUBPMK.OUT", "w", stdout);
    cin >> t;
    cin.ignore();
    while(t--){
        string t, s = "";
        getline(cin, t);
        for(char i:t){
            if(i!=' ') s+=i;
        }
        set<int> sett;
        int limit = (1<<s.size());
        for(int i = 1; i<limit; ++i){
            int t = i, pos = 0;
            string kq = "";
            while(t>0){
                if(t&1) kq+=s[pos];
                pos++;
                t>>=1;
            }
            sort(kq.begin(), kq.end());
            do{
                if(check(kq)){
                    sett.insert(stoi(kq));
                }
            }
            while(next_permutation(kq.begin(), kq.end()));
        }
        cout << sett.size() << "\n";
    }
    return 0;
}
