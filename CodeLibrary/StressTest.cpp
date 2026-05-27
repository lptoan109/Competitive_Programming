#include<bits/stdc++.h>
using namespace std;
const string name = "BAI1";
const int test = 100;
mt19937 rng(7405);
// Ham tra ve 1 so trong doan l r
long long rnd(long long l, long long r){
    return l+abs((long long)rng()%(r-l+1))+1;
}
// Ham tao test
void generatet(){
    ofstream inp((name+".INP").c_str());
    int n = 1e5, q = 1e3;
    inp << n << " " << q << "\n";
    for(int i = 1; i<=n; ++i){
        inp << rnd(1, 1e9) << " ";
    }
    while(q--){
        int l = rnd(1, n);
        inp << l << " " << rnd(l, n) << "\n";
    }
    inp.close();
}
// Ham kiem tra output cua 2 file co giong nhau khong
bool checktest(){
    if(system(("fc "+name+".OUT "+name+".ANS").c_str())!=0) return false;
    else return true;
}
// Ham xu ly chinh
void process(){
    for(int itest = 1; itest<=test; ++itest){
        generatet();
        system((".\\"+name+".exe").c_str());
        system((".\\"+name+"_trau.exe").c_str());

        bool ok = checktest();
        if(!ok){
            cout << "TEST " << itest << " : WA\n";
            exit(0);
        }
        else{
            cout << "TEST " << itest << " : AC\n";
        }
    }
}
signed main(){
    process();
    return 0;
}
