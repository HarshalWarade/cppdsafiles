// Binary Searching in arrays using c++

#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int mid = start + ((end - start) / 2);
    while (start <= end) {
        if (arr[mid] == key) {
            return mid;
        }
        else if (key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return -1;
}
int main() {
    int arr[10] = {1,3,4,6,7,8,12,34,56,78};
    cout << binarySearch(arr, 10, 12) << endl;
    return 0;
}