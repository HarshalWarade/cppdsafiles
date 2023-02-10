#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key) {
    int start = 0; int end = n - 1; int mid = start + (end - start) / 2;
    int ans = -1;
    while(start <= end) {
        if(arr[mid] == key) {
            // check in the leftmost part
            ans = mid;
            end = mid - 1;
        } else if (arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key) {
    int start = 0; int end = n - 1; int mid = start + (end - start) / 2;
    int ans = -1;
    while(start <= end) {
        if(arr[mid] == key) {
            // check in the leftmost part
            ans = mid;
            start = mid + 1;
        } else if (arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{

    int arr[10] = {1,1,1,1,1,1,1,1,1,7};
    cout << firstOcc(arr, 10, 1) << endl;
    cout << lastOcc(arr, 10, 1) << endl;
    return 0;
}