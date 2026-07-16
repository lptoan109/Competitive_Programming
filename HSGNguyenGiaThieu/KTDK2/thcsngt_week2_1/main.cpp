//Uoc gi Cau Be Dau Chuyen
/*
         .---._____.---.
        /  _    _    _  \
       /  / \  / \  / \  \
      |   |  | |  | |  |  |
      |   \_/  \_/  \_/   |
      |       .---.       |
      |      /     \      |
      |     |  O O  |     |
       \     \  _  /     /
        \     `---'     /
         \   .-----.   /
          \ /  ___  \ /
           |  /   \  |       .
           |  \___/  |      . .
           |         |     .
           \         /    .
            `-------'
*/
//Respect Cau Be
#define I cout
#define LOVE <<
#define CAU kq
#define BE <<
#define FOREVER '\n';
#include <bits/stdc++.h>
using namespace std;
unsigned long long solve(unsigned long long k){
    unsigned long long kq = 0;
    if(k>400){
        kq = 2927*(k-400);
        k = 400;
    }
    if(k>300){
        kq+=(2834*(k-300));
        k = 300;
    }
    if(k>200){
        kq+=(2536*(k-200));
        k = 200;
    }
    if(k>100){
        kq+=(2014*(k-100));
        k = 100;
    }
    if(k>50){
        kq+=(1734*(k-50));
        k = 50;
    }
    if(k>0) kq +=(1678*k);
    return kq;
}
int n;
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    while(n--){
        unsigned long long k;
        cin >> k;
        unsigned long long kq = solve(k);
        I LOVE CAU BE FOREVER
    }
    return 0;
}
