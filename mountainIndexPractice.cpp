#include<iostream>
using namespace std;
int peakElement(int arr[], int n) {
    int start = 0; int end = n - 1; int mid = start + (end - start)/2; int peak = -1;
    while(start < end) {
        if ( arr[mid] < arr[mid + 1] ) {
            start = mid + 1;
        } else {
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}
int main(){
    int arr[10] = {1,3,4,6,7,8,9,5,4,3};
    cout << peakElement(arr, 10) << endl;
    return 0;
}