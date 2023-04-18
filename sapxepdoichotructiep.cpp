#include <iostream>
using namespace std;

// Hàm sắp xếp bằng phương pháp đổi chỗ trực tiếp
void interchange_sort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                // Hoán đổi giá trị
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    // Mảng đã cho
    int arr[] = { 41, 23, 4, 14, 56, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sắp xếp mảng
    interchange_sort(arr, n);

    // In mảng đã sắp xếp
    cout << "Mang da sap xep: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
