#include<iostream>
using namespace std;

int sorter(int arr[], int n, int key) {
    int start = 0; int end = n - 1; int mid = start + (end - start) / 2;
    while(start <= end) {
        if(arr[mid] == key) {
            return mid;
        } else if(arr[mid] < key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr[5] = {45,67,89,90,343};
    cout << sorter(arr, 5, 67) << endl;
    return 0;
}