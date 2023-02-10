#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

void swapAlternate(int arr[], int size) {
    for(int i = 0; i<size; i+=2) {
        if((i + 1) < size) {
            swap(arr[i], arr[i+1]);
        }
    }
}

int main() {

    int even[8] = {4,2,6,8,9,1,3,5};
    int odd[5] = {5,2,6,8,1};

    swapAlternate(odd, 5);
    printArray(odd, 5);

    return 0;
}