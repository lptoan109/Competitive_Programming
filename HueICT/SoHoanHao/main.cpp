#include <bits/stdc++.h>
using namespace std;
int n, kq;
vector <int>a;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<n; ++i){
        if(n%i==0){
            kq+=i;
            if(kq>n){
                cout << "No";
                return 0;
            }
            a.push_back(i);
        }
    }
    if(kq==n){
        cout << "Yes\n";
        for(int i:a){
            cout << i << " ";
        }
    }
    else cout << "No";
    return 0;
}
