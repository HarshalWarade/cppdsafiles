#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void mergeArrays(vector<int>& arr1, int n, vector<int>& arr2, int m, vector<int>& arr3) {
    int indexi = 0; int indexj = 0;
    while(indexi < n && indexj < m) {
        if(arr1[indexi] < arr2[indexj]) {
            arr3.push_back(arr1[indexi]);
            indexi++;
        } else {
            arr3.push_back(arr2[indexj]);
            indexj++;
        }
    }
    while(indexi < n) {
        arr3.push_back(arr1[indexi]);
        indexi++;
    }
    while(indexj < m) {
        arr3.push_back(arr2[indexj]);
        indexj++;
    }
}

void printArray(vector<int>& arr, int k) {
    for(int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
}

int main() {

    vector<int>arr1 = {4,6,8,9};
    vector<int>arr2 = {1,2,3,4,5,6,7,9};
    vector<int>ans = {};
    mergeArrays(arr1, arr1.size(), arr2, arr2.size(), ans);
    printArray(ans, ans.size());

    return 0;
}