#include<iostream>
using namespace std;

int sortandReturn(int arr[], int n, int key) {
    for(int i = 0; i < (n - 1); i++) {
        for(int j = (i + 1); j < n; j++) {
            if(arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << i << endl;
        }
    }
}

int justfindIndex(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << i << endl;
        }
    }
}

int main()
{
    int arr[5] = {5,4,2,8,9};
    justfindIndex(arr, 5, 2);
    sortandReturn(arr, 5, 2);
    return 0;
}