#include <iostream>
using namespace std;

// Hàm tìm kiếm nhị phân
int binary_search(int arr[], int n, int x)
{
    // Thiết lập các biến
    int left = 0;
    int right = n - 1;

    // Lặp lại tìm kiếm
    while (left <= right)
    {
        int mid = (left + right) / 2;
        int mid_value = arr[mid];

        if (mid_value == x)
            return mid;
        else if (mid_value < x)
            left = mid + 1;
        else
            right = mid - 1;
    }

    // Không tìm thấy
    return -1;
}

int main()
{
    // Mảng đã cho
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Giá trị cần tìm
    int x = 10;

    // Tìm kiếm giá trị
    int result = binary_search(arr, n, x);

    // In kết quả
    if (result == -1)
        cout << "Khong tim thay gia tri";
    else
        cout << "Tim thay gia tri tai vi tri " << result;

    return 0;
}
