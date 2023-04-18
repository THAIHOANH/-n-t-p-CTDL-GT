#include <iostream>
using namespace std;

bool isAllNegative(float arr[], int size) {
    // Nếu mảng rỗng, thì mảng này thỏa mãn tính chất "toàn giá trị âm"
    if (size == 0) {
        return true;
    }
    // Nếu giá trị đầu tiên không âm, thì mảng không thỏa mãn tính chất "toàn giá trị âm"
    if (arr[0] >= 0) {
        return false;
    }
    // Nếu giá trị đầu tiên âm, ta gọi đệ quy với mảng đã bỏ đi giá trị đầu tiên
    return isAllNegative(arr + 1, size - 1);
}

int main() {
    float arr[] = {-1.2, -3.4, -2.1, -5.6};
    int size = sizeof(arr) / sizeof(arr[0]);
    if (isAllNegative(arr, size)) {
        cout << "Mang nay toan gia tri am" << endl;
    } else {
        cout << "Mang nay khong toan gia tri am" << endl;
    }
    return 0;
}
