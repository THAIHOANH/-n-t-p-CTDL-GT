#include <iostream>
using namespace std;

// Hàm sắp xếp bằng phương pháp chèn trực tiếp
void insertion_sort(int arr[], int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        // Di chuyển các phần tử lớn hơn key đến vị trí sau của chúng
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }

        // Chèn key vào vị trí đúng của nó trong đoạn [0, i-1]
        arr[j+1] = key;
    }
}

int main()
{
    // Mảng đã cho
    int arr[] = { 41, 23, 4, 14, 56, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sắp xếp mảng
    insertion_sort(arr, n);

    // In mảng đã sắp xếp
    cout << "Mang da sap xep: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
