#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;
    cout << "Dia chi cua a: " << &a << "\n";
    cout << "Gia tri con tro p: " << p << "\n";
    cout << "Gia tri tai dia chi p tro toi: " << *p << "\n";
    return 0;
}
