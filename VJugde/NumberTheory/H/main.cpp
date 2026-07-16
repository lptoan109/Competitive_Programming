#include <bits/stdc++.h>
using namespace std;
void solve(int a, int b, int c){
    int t1 = c/a;
    for(int i = 1; i<=t1; ++i){
        if((c-a*i)%b==0){
            cout << "Yes";
            return;
        }
    }
    int t2 = c/b;
    for(int i = 1; i<=t2; ++i){
        if((c-b*i)%a==0){
            cout << "Yes";
            return;
        }
    }
    cout << "No";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c;
    cin >>a  >> b >> c;
    solve(min(a, b), max(a,b), c);
    return 0;
}
