#include <bits/stdc++.h>
using namespace std;
int t;
char a[105];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        for(int i = 1; i<=n; ++i){
            cin >> a[i];
        }
        int cnt = 0;
        for(int i = 1; i<=n; ++i){
            if(a[i]=='R'){
                for(int j = n; j>=i+1; j--){
                    if(a[j]=='L') cnt++;
                }
                if(cnt<k){
                    for(int j = n; j>i; --j){
                        if(a[j]=='L'){
                            a[j] = 'R';
                            kq++;
                            cnt++;
                        }
                        if(cnt>=k){
                            break;
                        }
                    }
                }

            }
        }
    }
    return 0;
}
