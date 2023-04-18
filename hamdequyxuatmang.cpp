#include <iostream>
using namespace std;

void printArray(int arr[], int n, int i = 0) {
    if (i >= n) {
        return;
    }
    cout << arr[i] << " ";
    printArray(arr, n, i+1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, n);
    return 0;
}
