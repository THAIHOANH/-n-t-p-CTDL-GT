#include <iostream>
using namespace std;

// Hàm đổi chỗ 2 phần tử trong mảng
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// Hàm lấy phần tử chốt và đưa nó vào vị trí đúng
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // Chọn phần tử cuối cùng làm phần tử chốt
    int i = (low - 1); // Chỉ số của phần tử nhỏ hơn phần tử chốt

    for (int j = low; j <= high - 1; j++)
    {
        // Nếu phần tử hiện tại nhỏ hơn hoặc bằng phần tử chốt
        if (arr[j] <= pivot)
        {
            i++; // Tăng chỉ số của phần tử nhỏ hơn phần tử chốt
            swap(&arr[i], &arr[j]); // Đổi chỗ 2 phần tử đó
        }
    }

    swap(&arr[i + 1], &arr[high]); // Đưa phần tử chốt vào vị trí đúng
    return (i + 1);
}

// Hàm sắp xếp bằng phương pháp Quick Sort
void quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        // Chia mảng thành 2 đoạn và lấy phần tử chốt
        int pi = partition(arr, low, high);

        // Sắp xếp 2 đoạn đó độc lập với nhau
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

int main()
{
    // Mảng đã cho
    int arr[] = { 41, 23, 4, 14, 56, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sắp xếp mảng
    quick_sort(arr, 0, n - 1);

    // In mảng đã sắp xếp
    cout << "Mang da sap xep: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
