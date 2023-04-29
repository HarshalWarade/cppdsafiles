#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int start, int end) {
    int mid = start + (end - start ) / 2;
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];
    
    // copying values in particular array
    int k = start;
    for(int i = 0; i < len1; i++) {
        first[i] = arr[k++];
    }
    // for second array
    k = mid + 1;
    for(int i = 0; i < len2; i++) {
        second[i] = arr[k++];
    }

    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    k = start;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2] ) {
            arr[k++] = first[index1++];
        } else {
            arr[k++] = second[index2++];
        }
    }
    while(index1 < len1) {
        arr[k++] = first[index1++];
    }
    while(index2 < len2) {
        arr[k++] = second[index2++];
    }
    
}


void mergeSort(int *arr, int start, int end) {

    // base case
    if(start >= end) {
        return;
    }

    int mid = start + (end - start) / 2;

    // for left part
    mergeSort(arr, start, mid);
    // for right part
    mergeSort(arr, mid + 1, end);
    // now merge arrays from start to end.
    merge(arr, start, end);
}

int main() {

    int arr[5] = {7,4,1,9,8};
    int n = 5;

    // passing start and end also
    mergeSort(arr, 0, n - 1);

    // printing the resulting array.
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}