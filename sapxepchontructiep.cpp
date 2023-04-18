#include <iostream>
using namespace std;

// Hàm sắp xếp bằng phương pháp chọn trực tiếp
void selection_sort(int arr[], int n)
{
    int min_idx;
    for (int i = 0; i < n-1; i++)
    {
        // Tìm phần tử nhỏ nhất trong đoạn [i+1, n-1]
        min_idx = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        // Hoán đổi phần tử nhỏ nhất với phần tử đầu tiên của đoạn [i+1, n-1]
        if (min_idx != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
}

int main()
{
    // Mảng đã cho
    int arr[] = { 41, 23, 4, 14, 56, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sắp xếp mảng
    selection_sort(arr, n);

    // In mảng đã sắp xếp
    cout << "Mang da sap xep: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
