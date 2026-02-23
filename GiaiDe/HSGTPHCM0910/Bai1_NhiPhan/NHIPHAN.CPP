#include <bits/stdc++.h>
using namespace std;
int q;
void dem(int n){
    int i = -1;
    //vector <int>a;
    while(n>0){
        i++;
        //a.push_back(n%2);
        if(n%2==1) cout << i << " ";
        n/=2;
    }
    cout << "\n";
//    cerr << "\n";
//    for(int x:a){
//        cerr << x;
//    }
//    cerr << "\n";
//    cerr << "\n";
}
//void sinhtest(){
//    int qm = 10;
//    cout << qm << "\n";
//    while(qm--){
//        int ta = 1e8;
//        cout << ta << "\n";
//    }
//}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("NHIPHAN.INP", "r", stdin);
    freopen("NHIPHAN.OUT", "w", stdout);
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        dem(n);
    }
    //sinhtest();
    return 0;
}
