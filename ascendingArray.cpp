#include<iostream>
using namespace std;
int ascendArray(int arr[], int n) {
    for(int i = 0; i < (n - 1); i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[i]) {
                int store = arr[i];
                arr[i] = arr[j];
                arr[j] = store;
            }
        }
    }
}
int printArray(int arr[], int n) {
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[10] = {4,2,6,7,8,12,45,65,34,23};    
    ascendArray(arr, 10);
    printArray(arr, 10);
    return 0;
}