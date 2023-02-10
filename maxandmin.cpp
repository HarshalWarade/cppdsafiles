#include<iostream>
using namespace std;

int getMin(int arr[], int n) {
    int min = INT16_MAX;
    for(int i = 0; i<n; i++){
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
int getMax(int arr[], int n){
    int max = INT16_MIN;
    for(int i = 0; i<n; i++) {
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int size; cout << "Enter the size: "; cin >> size;
    int num[20];
    for(int i = 0; i<size; i++){
        cin >> num[i];
    }
    cout << "Max: " << getMax(num, size) << endl;
    cout << "Min: " << getMin(num, size) << endl;
}