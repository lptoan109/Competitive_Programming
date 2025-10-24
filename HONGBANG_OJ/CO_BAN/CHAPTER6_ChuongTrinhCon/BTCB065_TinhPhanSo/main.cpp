#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll ucln(ll a, ll b) {
    while (b != 0) {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void toigian(ll &tu, ll &mau) {
    if (mau == 0) return;

    if (tu == 0) {
        mau = 1;
        return;
    }

    if (mau < 0) {
        tu = -tu;
        mau = -mau;
    }

    ll u = ucln(tu, mau);
    if (u < 0) u = -u;

    tu /= u;
    mau /= u;
}

void inphanso(ll tu, ll mau) {
    toigian(tu, mau);

    if (mau == 1) {
        cout << tu;
    } else {
        cout << tu << " / " << mau;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b == 0 || d == 0) {
        cout << "Tong 2 phan so = Phep toan loi!\n";
        cout << "Hieu 2 phan so = Phep toan loi!\n";
        cout << "Tich 2 phan so = Phep toan loi!\n";
        cout << "Thuong 2 phan so = Phep toan loi!\n";
        return 0;
    }

    ll tu_moi, mau_moi;

    tu_moi = a * d + c * b;
    mau_moi = b * d;
    cout << "Tong 2 phan so = ";
    inphanso(tu_moi, mau_moi);
    cout << "\n";

    tu_moi = a * d - c * b;
    mau_moi = b * d;
    cout << "Hieu 2 phan so = ";
    inphanso(tu_moi, mau_moi);
    cout << "\n";

    tu_moi = a * c;
    mau_moi = b * d;
    cout << "Tich 2 phan so = ";
    inphanso(tu_moi, mau_moi);
    cout << "\n";

    tu_moi = a * d;
    mau_moi = b * c;
    cout << "Thuong 2 phan so = ";
    if (mau_moi == 0) {
        cout << "Phep toan loi!";
    } else {
        inphanso(tu_moi, mau_moi);
    }
    cout << "\n";

    return 0;
}

