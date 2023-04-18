#include <iostream>
using namespace std;

// Hàm để hoán đổi giá trị của 2 phần tử
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm để tạo một heap con với node cha i
void heapify(int arr[], int n, int i) {
    int largest = i;    // Khởi tạo largest là node cha
    int l = 2 * i + 1;  // left = 2*i + 1
    int r = 2 * i + 2;  // right = 2*i + 2
 
    // Nếu node con bên trái lớn hơn node cha
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    // Nếu node con bên phải lớn hơn node lớn nhất hiện tại
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    // Nếu largest không phải là node cha
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
 
        // Đệ quy để heapify các node con bị ảnh hưởng
        heapify(arr, n, largest);
    }
}

// Hàm sắp xếp mảng
void heapSort(int arr[], int n) {
    // Tạo heap (sắp xếp mảng thành cây nhị phân)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    // Trích xuất các phần tử từ heap một cách lần lượt
    for (int i = n - 1; i >= 0; i--) {
        // Di chuyển phần tử lớn nhất đến cuối mảng
        swap(&arr[0], &arr[i]);
 
        // Gọi heapify để tạo heap tiếp tục trên mảng đã được rút gọn
        heapify(arr, i, 0);
    }
}

// Hàm in các phần tử của mảng
void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

// Hàm main
int main() {
    int arr[] = {41, 23, 4, 14, 56, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Mang ban dau: ";
    printArray(arr, n);

    heapSort(arr, n);

    cout << "Mang da sap xep: ";
    printArray(arr, n);

    return 0;
}

