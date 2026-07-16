#include <bits/stdc++.h>
using namespace std;
int q;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> q;
    while(q--){
        long long kq = 0;
        string a, t;
        cin >> a >> t;
        map<char, int> cnt;
        for(char i:t) cnt[i]++;
        for(char i:a){
            if(i=='a'){
                kq+=cnt.size();
            }
        }
        cout << kq << "\n";
    }
    return 0;
}
