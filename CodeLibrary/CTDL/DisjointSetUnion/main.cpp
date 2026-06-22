#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int lab[MAXN+5];
void make_set(int v){ //Hàm tạo tập hợp có chứa duy nhất gt v
    lab[v] = -1;
}
int find_set(int v){ //Hàm tìm gốc của đỉnh v
    return lab[v]<0:v:lab[v] = find_set(lab[v]);
}
void union_set(int a, int b){ //Hàm gộp 2 tập hợp có chứa 2 gt a, b
    a = find_set(a);
    b = find_set(b);
    if(a!=b){
        if(lab[a]>lab[b]) swap(a, b);
        lab[a]+=lab[b];
        lab[b] = a;
    }
}
int main()
{
    cout << "Disjoint Set Union" << endl;
    return 0;
}
