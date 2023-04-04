//https://blog.luyencode.net/thuat-toan-tim-kiem-nhi-phan///

#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x) {
  if (r >= l) {
    int mid = l + (r - l) / 2; 
    if (arr[mid] == x)
      return mid;
    if (arr[mid] > x)
      return binarySearch(arr, l, mid - 1, x);
    return binarySearch(arr, mid + 1, r, x);
  }
  return -1;
}
 
int main(void) {
  int arr[] = {2, 28, 30, 40, 50};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 30;
  int result = binarySearch(arr, 0, n - 1, x);
  if (result == -1)
    printf("%d Khong ton tai  %d", x, result);
  else
    printf("%d Vi tri so %d", x, result);
  return 0;
}
