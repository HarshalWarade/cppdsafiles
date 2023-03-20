#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void mergeSort(int* arr1, int n, int* arr2, int m, int* arr3) {
    int i = 0, j = 0, k = 0;
    while((i < n) && (j < m)) {
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

void printArray(int* arr3, int n) {
    for(int indexes = 0; indexes < n; indexes++) {
        cout << arr3[indexes] << " ";        
    }
}

int main() {

    int arr1[4] = {1,4,7,9};
    int arr2[8] = {1,2,3,6,8,9,12,14};
    int arr3[12];
    int n = 4, m = 8, o = 12;
    mergeSort(arr1, n, arr2, m, arr3);
    printArray(arr3, o);

    return 0;
}