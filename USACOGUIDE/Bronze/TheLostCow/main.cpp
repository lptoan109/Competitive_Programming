#include <bits/stdc++.h>
using namespace std;
int x, y, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("lostcow.in", "r", stdin);
    //freopen("lostcow.out", "w", stdout);
    cin >> x >> y;
    int tar = x+1, cur = x, cnt = 2;
    while(1){
        if(tar>0){
            for(cur +=1; cur<=tar; ++cur){
                kq++;
                if(cur == y){
                    cout << kq;
                    return 0;
                }
                cout << cur << " " << tar << " " << kq << "\n";
            }
            tar = x-cnt;
            cnt++;
        }
        else{
            for(cur-=1; cur>=tar; --cur){
                kq++;
                if(cur==y){
                    cout << kq;
                    return 0;
                }
                cout << cur  << " " << tar << " " << kq << "\n";
            }
            tar = x+cnt;
            cnt++;
        }
    }
    return 0;
}
