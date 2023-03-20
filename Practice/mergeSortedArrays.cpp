#include<iostream>
using namespace std;

void mergeArrays(int *arr1, int n, int *arr2, int m, int *arr3) {
    int i = 0, j = 0, k = 0;
    while(i < n && j < m) {
        if(arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }
    while(i < n) {
        arr3[k++] = arr1[i++];
    }
    while(j < m) {
        arr3[k++] = arr2[j++];
    }
}

void printArray(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {

    int arr1[4] = {4,6,8,9};
    int arr2[8] = {1,2,3,4,5,6,7,9};
    int arr3[13] = {0};

    mergeArrays(arr1, 4, arr2, 8, arr3);
    printArray(arr3, 13);

    return 0;
}