#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int start = 0; int end = n - 1;
    int mid = start + ((end - start) / 2);

    for(int i = 0; i<n; i++) {
        if(arr[mid] == key) {
            return mid;
        }

        if(key > arr[mid]) {
            start = mid + 1;
        } 

        else {
            end = mid - 1;
        }

        mid = start + ((end - start) / 2);
    }

    return -1;

}

int main()
{
    int arr[6] = {1,4,6,8,9,12};
    
    cout << binarySearch(arr, 6, 6) << endl;    

    return 0;
}