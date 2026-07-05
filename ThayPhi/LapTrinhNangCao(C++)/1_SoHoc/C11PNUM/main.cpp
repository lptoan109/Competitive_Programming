#include <bits/stdc++.h>
using namespace std;
const int MAXN = 3e7;
bool check[MAXN+5];
vector<int> snt;
void sang(){
    check[0] = check[1] = true;
    for(int i = 2; i*i<=MAXN; ++i){
        if(!check[i]){
            for(int j = i*i; j<=MAXN; j+=i){
                check[j] = true;
            }
        }
    }
    for(int i = 1; i<=MAXN; ++i) if(!check[i]) snt.push_back(i);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sang();
    cout << "consong";
    return 0;
}
