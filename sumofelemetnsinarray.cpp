#include<iostream>
using namespace std;

int findSum(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i<n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {

    int arr[20];
    int size;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Now insert elements for "<< size << " size array" << endl;

    for(int i = 0; i<size; i++) {
        cin >> arr[i];
    }
    cout << findSum(arr, size) << endl;

    return 0;

}