#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n, a[MAXN+5], b[MAXN+5], c = 1e9, ta, tb;
bool ca, cb;
map<int, int> cnt;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("ProblemC.INP", "r", stdin);
    freopen("ProblemC.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
        if(a[i]==0) ca = true;
    }
    for(int i = 1; i<=n; ++i){
        cin >> b[i];
        if(b[i]==0) cb = true;
    }
    if(ca && cb){
        cout << 0;
        return 0;
    }
    sort(a+1, a+1+n);
    sort(b+1, b+1+n);
    for(int i = 1;i<=n; ++i){
        if(abs(a[i])<c){
            ta = a[i];
            c = abs(a[i]);
        }
        if(a[i]<0){
            if(cnt.find(abs(a[i]))==cnt.end()) cnt[abs(a[i])] = -1;
        }
        else{
            if(cnt.find(abs(a[i]))==cnt.end()){
                if(cnt[abs(a[i])]==-1) cnt[abs(a[i])] = 2;
                else cnt[abs(a[i])] = 1;
            }
        }
    }
    c = 1e9;
    for(int i = 1;i<=n; ++i){
        if(abs(b[i])<c){
            tb = b[i];
            c = abs(b[i]);
        }
        if(b[i]<0){
            if(cnt.find(abs(b[i]))!=cnt.end()){
                if(cnt[abs(b[i])] == 1 || cnt[abs(b[i])] == 2){
                    cout << 0;
                    return 0;
                }
            }
        }
        else{
            if(cnt.find(abs(b[i]))!=cnt.end()){
                if(cnt[abs(b[i])] == -1 || cnt[abs(b[i])] == 2){
                    cout << 0;
                    return 0;
                }
            }
        }
    }
    //cout << ta << " " << tb << "\n";
    cout << abs(ta+tb);
    return 0;
}
