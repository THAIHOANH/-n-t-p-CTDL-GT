#include <iostream>
using namespace std;

// Hàm tìm kiếm tuyến tính
int linear_search(int arr[], int n, int x)
{
    // Duyệt qua từng phần tử của mảng để tìm kiếm
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
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
    int result = linear_search(arr, n, x);

    // In kết quả
    if (result == -1)
        cout << "Khong tim thay gia tri";
    else
        cout << "Tim thay gia tri tai vi tri " << result;

    return 0;
}
