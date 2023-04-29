#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void mergeArrays(vector<int>& arr1, int n, vector<int>& arr2, int m, vector<int>& ans) {
    int i = 0, j = 0;
    while(i < n && j < m) {
        if(arr1[i] < arr2[j]) {
            ans.push_back(arr1[i++]);
        } else {
            ans.push_back(arr2[j++]);
        }
    }
    while(i < n) {
        ans.push_back(arr1[i++]);
    }
    while(j < m) {
        ans.push_back(arr2[j++]);
    }
}

void printArray(vector<int>& ans, int n) {
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {

    vector<int>arr1 = {1,4,7,9,12,34,67,89,90};
    vector<int>arr2 = {56,89,90,123,345,576};
    vector<int>ans = {};

    mergeArrays(arr1, arr1.size(), arr2, arr2.size(), ans);
    printArray(ans, ans.size());

    return 0;
}