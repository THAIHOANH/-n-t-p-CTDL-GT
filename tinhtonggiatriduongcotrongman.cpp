#include <iostream>
using namespace std;

float sum_positive(float arr[], int size) {
    if (size == 0) {
        return 0;
    } else {
        float sum = sum_positive(arr, size - 1);
        if (arr[size - 1] > 0) {
            sum += arr[size - 1];
        }
        return sum;
    }
}

int main() {
    float arr[] = {2.5, -1.2, 3.6, -4.8, 6.7, -2.1};
    int size = sizeof(arr) / sizeof(arr[0]);

    float result = sum_positive(arr, size);
    cout << "Tong cac gia tri duong la: " << result << endl;

    return 0;
}
