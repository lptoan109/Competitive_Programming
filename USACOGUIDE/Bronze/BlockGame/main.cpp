#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e3;
int n;
map<char, int> kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        map<char, int> kq1, kq2;
        string a, b;
        cin >> a >> b;
        for(char j:a){
            kq1[j]++;
        }
        for(char j:b){
            kq2[j]++;
        }
        //cout << i << ":\n";
        for(char j = 'a'; j<='z'; ++j){
            kq[j] += max(kq1[j], kq2[j]);
            //cout << j << " : " << kq1[j] << " " << kq2[j] << "\n";
        }
    }
    for(char i = 'a'; i<='z'; ++i){
        cout << kq[i] << "\n";
    }
    return 0;
}
