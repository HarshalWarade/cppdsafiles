#include<iostream>
using namespace std;

int reverse(int arr[], int n){

    int start = 0;
    int end = n - 1;

    while(start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end --;
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
}


int main() {

    int arr[6] = {4,2,6,8,9,5};

    reverse(arr, 6);
    printArray(arr, 6);

    return 0;
}