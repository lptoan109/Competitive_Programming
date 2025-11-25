#include<bits/stdc++.h>
using namespace std;
void nhap(int &n, int &m){
    cin >> n >> m;
}

bool ktchiahet1(int n, int m){
    if(m==0) return false;
    if(n%m==0) return true;
    return false;
}

bool ktchiahet2(int n, int m){
    if(n==0) return false;
    if(m%n==0) return true;
    return false;
}

bool songuyento(int m){
    if(m<2) return false;
    for(long long i = 2; i*i<=m; ++i){
        if(m%i==0) return false;
    }
    return true;
}

void xuatsonguyento(int n, int m, int &d){
    int ln = max(m,n), nn = min(m,n);
    for(int i = nn; i<=ln; ++i){
        if(songuyento(i)){
            cout << i << " ";
            d++;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int m,n, d = 0;
    nhap(n,m);
    ktchiahet1(n,m)?cout << "Yes\n":cout << "No\n";
    ktchiahet2(n,m)?cout << "Yes\n":cout << "No\n";
    songuyento(m)?cout << "Yes\n":cout << "No\n";
    xuatsonguyento(n,m,d);
    cout << "\n" << d;
}
