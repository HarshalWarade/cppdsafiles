#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end) {
    // getting the pivot element
    int pivot = arr[start];
    // counting elements that are less than pivot
    int count = 0;
    for(int i = start + 1; i <= end; i++) {
        if(arr[i] <= pivot) {
            count++;
        }
    }
    // correct index for the pivot is start + count
    int pivotIndex = start + count;

    // placing pivot at the correct position.
    swap(arr[pivotIndex], arr[start]);

    // two pointers to check the left and right part for conditions.
    int i = start; int j = end;
    while(i < pivotIndex && j > pivotIndex) {
        while(arr[i] <= pivot) {
            i++;
        }
        while(arr[j] > pivot) {
            j--;
        }
        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int start, int end) {
    
    if(start >= end) {
        return;
    }

    int p = partition(arr, start, end);
    // sort left part
    quickSort(arr, start, p - 1);
    // sort right part
    quickSort(arr, p + 1, end);
}

int main() {

    int arr[10] = {7,1,2,9,90,56,2,4,12,55};
    int n = 10;
    cout << endl;
    
    quickSort(arr, 0, n-1);         

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
} 