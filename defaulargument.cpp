#include<iostream>
using namespace std;

    // default argument, means passing argument as optional to the function, if given use it, else use, whatever is provided in the signature.

    void printArray(int arr[], int n, int start = 0) {
        for(int i = start; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }


int main() {

    int arr[5] = {4,6,2,1,9};
    printArray(arr, 5); // it will run without 3rd argument. (optional)
    printArray(arr, 5, 3);

    return 0;
}