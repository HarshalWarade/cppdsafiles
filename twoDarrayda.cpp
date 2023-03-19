// 2D arrays in dynamic allocation.
// getting multiple pointers integer set from the heap.
// agar array banana hai to multiple *int* type blocks banane padte hai.. 
// if u want 2d arrays, we need to create multiple blocks of 1D arrays.

#include<iostream>
using namespace std;
    
int main() {
    
    int n; cin >> n;

    
    // Creating a 2D array
    int **arr = new int*[n];
    for(int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }

    // Taking Input
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Printing Output
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}