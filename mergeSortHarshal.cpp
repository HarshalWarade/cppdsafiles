#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int partition(int* arr, int start, int end) {
    int pivot = arr[start];
    int count = 0;
    for(int i = start + 1; i <= end; i++) {
        if(arr[i] <= pivot) {
            count++;
        }
    }
    // place pivot at its correct position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);
    // controlling left and right part for conditions
    int i = start; int j = end;
    while(i < pivotIndex && j > pivotIndex) {
        while(arr[i] < pivot) {
            i++;
        } while (arr[j] > pivot) {
            j--;
        }
        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
}
void quickSort(int* arr, int start, int end) {
    // base case
    if(start >= end) {
        return;
    }
    // partition
    int p = partition(arr, start, end);
    // sorting left part
    quickSort(arr, start, p - 1);
    // sorting right part
    quickSort(arr, p + 1, end);
}
int main() {
    int arr[10] = {6,4,1,9,12,56,5,2,89,100};
    int n = 10;
    quickSort(arr, 0, n - 1);
    for(int i:arr) {
        cout << i << " ";
    }
    return 0;
}