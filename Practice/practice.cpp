#include<iostream>
using namespace std;



int main() {

    int arr[4][4] = {{1,2,3,4}, {2,3,4,5}, {6,4,2,0}, {9,7,8,6}};
    
    // printing the matrix
    for(int rows = 0; rows < 4; rows++) {
        for(int cols = 0; cols < 4; cols++) {
            cout << arr[rows][cols] << " ";
        }
        cout << endl;
    }

    // transpose of the matrix
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 2; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
    cout << endl << endl;

    // printing the matrix again after the transpose
    for(int rows = 0; rows < 4; rows++) {
        for(int cols = 0; cols < 4; cols++) {
            cout << arr[rows][cols] << " ";
        }
        cout << endl;
    }
    return 0;
}