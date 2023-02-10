// sorting algorithm.. that sorts an array... multiple rounds.. 
#include<iostream>
using namespace std;

int insertionSort(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        // Assume first element to be minimum;
        int minIndex = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
int printArray(int arr[], int n) {
    for(int i = 0; i<2; i++) {
        cout << arr[i] << " ";
    }
}
int main() {

    int arr[5] = {4,9,8,1,3};
    insertionSort(arr, 5);
    cout << printArray(arr, 5);
    return 0;
}