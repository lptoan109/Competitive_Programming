#include<bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2")
#define int long long
using namespace std;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

int Rand(int l, int r){
    return uniform_int_distribution<int>(l, r)(rng);
}

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    const int NTEST = 1e18;

    for(int test = 1; test <= NTEST; ++test){
        ofstream input("SOLVE.INP");
        ////////////////////////////

				// [ nhập dữ liệu input theo format bạn muốn ]

        ////////////////////////////
        input.close();

        system("solve.exe");
        system("trau.exe");

        if(system("fc SOLVE.OUT SOLVE.ANS") != 0){
            cout << "WRONG ANSWER!\n";
            exit(-1);
        }

    }

    return 0;
}
