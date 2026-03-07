void swapPointer(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5, b = 10;
    swapPointer(&a, &b);
    cout << a << " " << b;
}
