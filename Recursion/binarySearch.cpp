#include<iostream>
using namespace std;

bool binSearch(int *arr, int start, int end, int key) {

    // base case
    if(start > end)
        return false;

    int mid = start + (end - start) / 2;
    if(arr[mid] == key)
        return true;

    if(arr[mid] < key) {
        bool v = binSearch(arr, mid + 1, end , key);
        return v;
    } else {
        bool v = binSearch(arr, start, mid - 1, key);
        return v;
    }

}

int main() {

    int arr[6] = {1,4,5,8,9,12};
    int key = 125;
    int start = 0;
    int end = 5;

    bool foundornot = binSearch(arr, start, end, key);
    if(foundornot)
        cout << "FOUND" << endl;
    
    else
        cout << "NOT FOUND" << endl;
        
    return 0;
}