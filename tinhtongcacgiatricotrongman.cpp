#include <iostream>
using namespace std;

float tong(float a[], int n)
{
    if (n == 1) return a[0]; // trường hợp cơ sở
    else return a[n-1] + tong(a, n-1); // quy nạp
}

int main()
{
    int n = 5;
    float a[n] = {1.5, 2.5, 3.5, 4.5, 5.5};
    cout << "Tong cac gia tri trong mang: " << tong(a, n);
    return 0;
}
