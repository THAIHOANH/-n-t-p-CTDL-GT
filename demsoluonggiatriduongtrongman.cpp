#include <iostream>

using namespace std;

int countPositive(float arr[], int n) {
    // Trường hợp cơ sở: chỉ có một phần tử trong mảng
    if (n == 1) {
        if (arr[0] > 0) {
            return 1;
        } else {
            return 0;
        }
    }

    // Tính số lượng giá trị dương trong mảng con từ vị trí thứ hai trở đi
    int count = countPositive(arr + 1, n - 1);

    // Nếu phần tử đầu tiên của mảng là dương, cộng thêm 1 vào số lượng giá trị dương đã tính được
    if (arr[0] > 0) {
        count++;
    }

    // Trả về số lượng giá trị dương đã tính được
    return count;
}

int main() {
    float arr[] = { 41.5, -23.8, 4, 14.2, 56.7, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int positiveCount = countPositive(arr, n);
    cout << "So luong gia tri duong trong mang: " << positiveCount << endl;

    return 0;
}
