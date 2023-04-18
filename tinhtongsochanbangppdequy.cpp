#include <iostream>
using namespace std;

int evenSum(int arr[], int n) {
   if (n == 0 || n == 1) // bước 1
      return 0;
   int sum = evenSum(arr, n - 1); // bước 3
   if (arr[n - 1] % 2 == 0) // bước 2
      sum += arr[n - 1];
   return sum; // bước 4
}

int main() {
   int arr[] = {2, 5, 7, 8, 10, 12, 15};
   int n = sizeof(arr) / sizeof(arr[0]);
   cout << "Tong cac so chan trong mang la: " << evenSum(arr, n) << endl;
   return 0;
}
