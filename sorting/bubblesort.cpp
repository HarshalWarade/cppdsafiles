#include<iostream>
using namespace std;

int bubbleSort(int arr[], int n) {
    for(int i = 0; i < (n - 1); i++) {
        for(int j = 0; j < (n - i); j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[30]; int n; cout << "Enter the length of array: ";
    cin >> n;
    cout << "Enter array elements for size ("<<n<<"): " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    return 0;
}