#include <bits/stdc++.h>
using namespace std;
int n;
pair<char, int> a[1005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> a[i].first >> a[i].second;
    }
    for(int i = 1; i<n; ++i){
        if(a[i].first == "L"){
            maxx = a[i].second;
            for(int j = i+1; j<=n; ++j){
                if(a[j].first == "L"){

                }
            }
        }
    }
    return 0;
}
