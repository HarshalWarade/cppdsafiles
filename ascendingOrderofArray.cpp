#include<iostream>
using namespace std;
int binarySearching(int arr[], int n, int key) {
    int start = 0; int end = n - 1; int mid = start + ((end - start) / 2);    
    while(start<=end) {
        if(arr[mid] == key) {
            return mid;
        } else if(key < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
        mid = start + ((end - start) / 2);
    }    
    return mid;
}
int main() {
    int arr[10] = {1,4,5,6,8,12,45,67,89,90};
    cout << binarySearching(arr, 10, 6) << endl;
    cout << binarySearching(arr, 10, 5) << endl;
    return 0;
}