#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int par(int* arr, int start, int end) {
    
}

void quickSort(int* arr, int start, int end) {
    if(start >= end) {
        return;
    }
    int p = par(arr, start, end);
    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
}

int main() {

    int arr[10] = {5,3,1,8,9,12,34,56,7,0};
    int n = 10;
    quickSort(arr, 0, n - 1);

    return 0;
}