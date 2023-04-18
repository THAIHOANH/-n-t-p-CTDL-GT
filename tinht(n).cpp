#include <iostream>
using namespace std;

// Định nghĩa hàm đệ quy tính T(n)
int T(int n) {
    if (n == 1) {  // Điều kiện dừng
        return 1;
    } else {
        return n * T(n-1);  // Gọi đệ quy
    }
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "T(" << n << ") = " << T(n) << endl;
    return 0;
}
