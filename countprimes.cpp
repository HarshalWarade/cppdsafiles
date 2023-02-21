#include<iostream>
#include<vector>
using namespace std;

int thirdMax(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[10] = {4,7,2,1,8,9,23,12,56,10};
    for(int i:arr) {
        cout << i << " ";
    }
    cout << endl;
    thirdMax(arr, 10);
    return 0;
}