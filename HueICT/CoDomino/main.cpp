#include <bits/stdc++.h>
using namespace std;
vector<pair <int, int>> a;
int n, kq1[60],kq2[60];
bool compare1(pair <int,int>b, pair<int,int>c){
    if(b.first == c.first) return b.second<c.second;
    return b.first<c.first;
}
bool compare2(pair <int,int>b, pair<int,int>c){
    if(b.second == c.second) return b.first<c.first;
    return b.second<c.second;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("NHAP.INP", "r", stdin);
    cin >> n;
    for(int i = 0; i<n; ++i){
        int x1,x2;
        cin >> x1 >> x2;
        int ln = max(x1,x2);
        int nn = min(x1,x2);
        a.push_back({ln,nn});
    }
    sort(a.begin(), a.end(), compare1);
    for(int i = n-1; i>=0; --i){
        int t = a[i].first+a[i].second;
        if(t>=10){
            kq1[i] = t%10;
            a[i-1].first++;
        }
        else kq1[i] = t;
    }
    sort(a.begin(), a.end(), compare2);
    for(int i = n-1; i>=0; --i){
        int t = a[i].first+a[i].second;
        if(t>=10){
            kq2[i] = t%10;
            a[i-1].first++;
        }
        else kq2[i] = t;
    }
//    for(int i = 0; i<n; ++i){
//        cout << kq1[i];
//    }
//    cout << "\n";
//    for(int i = 0; i<n; ++i){
//        cout << kq2[i];
//    }
//    return 0;
    for(int i = 0; i<n; ++i){
        if(kq1[i]>kq2[i]){
            for(int i = 0; i<n; ++i){
                cout << kq1[i];
            }
            return 0;
        }
        if(kq2[i]>kq1[i]){
            for(int i = 0; i<n; ++i){
                cout << kq2[i];
            }
            return 0;
        }
    }
    for(int i = 0; i<n; ++i){
        cout << kq1[i];
    }
    return 0;
}
