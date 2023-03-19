#include<iostream>
using namespace std;

bool present(int arr[], int size, int key) {

    //base case
    if(size == 0) {
        return false;
    }
    if(arr[0] == key) {
        return true;
    } else {
        bool h = present(arr + 1, size - 1, key);
        return h;
    }
    
}

int main() {

    int arr[4] = {6,4,3,8};
    int size = 4;
    int key = 23;
    bool check = present(arr, size, key);
    if(check) {
        cout << "FOUND" << endl;
    } else {
        cout << "NOT FOUND" << endl;
    }

    return 0;
}