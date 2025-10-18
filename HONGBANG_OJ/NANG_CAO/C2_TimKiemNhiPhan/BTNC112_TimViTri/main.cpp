#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 1e7;
int a[MAXN + 5];
int n, x;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> x;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);

    int low = lower_bound(a + 1, a + n + 1, x) - a,
        high = upper_bound(a + 1, a + n + 1, x) - a;

    if(find(a + 1, a + n + 1, x) == a + n + 1){
        cout << "No\n";
        cout << "No\n";
    }
    else{
        cout << "Vi tri dau tien cua " << x << " trong mang A la " << low << "\n";
        cout << "Vi tri cuoi cung cua " << x << " trong mang A la " << high - 1 << "\n";
    }

    if(high == n + 1) cout << "No\n";
    else cout << "Vi tri cua phan tu dau tien > " << x << " trong mang A la " << high << ", gia tri " << a[high] << "\n";

    return 0;
}
