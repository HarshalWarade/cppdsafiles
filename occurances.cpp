#include<iostream>
using namespace std;
int firstOccurrence(int arr[], int n, int key) {
    int start = 0; int end = n - 1; int mid = start + ((end - start) / 2);
    int ans = -1;
    while(start <= end) {
        if(arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return ans;
}
int lastOccurrence(int arr[], int n, int key) {   
    int start = 0; int end = n - 1; int mid = start + ((end - start) / 2);
    int ans = -1;
    while(start <= end) {
        if(arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return ans;
}
int main()
{    
    int arr[7] = {3,3,3,3,3,7,6};
    cout << "First occurrence of 3 is: " << firstOccurrence(arr, 7, 3) << endl;
    cout << "Last occurrence of 3 is: " << lastOccurrence(arr, 7, 3) << endl;
    return 0;
}




// #include <bits/stdc++.h>

// int firstOccurrence(vector<int>& arr, int n, int key) {

//     int start = 0; int end = n - 1; int mid = start + ((end - start) / 2);
//     int ans = -1;
//     while(start <= end) {

//         if(arr[mid] == key) {
//             ans = mid;
//             end = mid - 1;
//         } else if (key > arr[mid]) {
//             start = mid + 1;
//         } else {
//             end = mid - 1;
//         }

//         mid = start + ((end - start) / 2);

//     }

//     return ans;

// }

// int lastOccurrence(vector<int>& arr, int n, int key) {
    
//     int start = 0; int end = n - 1; int mid = start + ((end - start) / 2);
//     int ans = -1;
//     while(start <= end) {

//         if(arr[mid] == key) {
//             ans = mid;
//             start = mid + 1;
//         } else if (key > arr[mid]) {
//             start = mid + 1;
//         } else {
//             end = mid - 1;
//         }

//         mid = start + ((end - start) / 2);

//     }

//     return ans;

// }

// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//     pair<int,int> p;
//     p.first = firstOccurrence(arr, n, k);
//     p.second = lastOccurrence(arr, n, k);

//     return p;
// }