#include <bits/stdc++.h>
using namespace std;
int n;
long long t, t1, t2;
vector<int> kq1, kq2;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i) t+=i;
    if(t%2==1){
        cout << "NO";
        return 0;
    }
    t/=2;
    cout << t << "\n";
    for(int i = n; i>=1; --i){
        kq1.push_back(i);
        t-=i;
        if(t==0) break;
        if(t<n){
            kq1.push_back(t);
            break;
        }
    }
    sort(kq1.begin(), kq1.end());
    cout << "YES\n";
    cout << kq1.size() << "\n";
    for(int i: kq1){
        //cout << i << " ";
        t1+=i;
    }
    cout << "\n";

    for(int i = 1; i<=n; ++i){
        if(!binary_search(kq1.begin(), kq1.end(), i)) kq2.push_back(i);
    }
    cout << kq2.size() << "\n";
    for(int i:kq2){
        //cout << i << " ";
        t2+=i;
    }
    cout << "\n" << t1 << " " << t2;
    return 0;
}
