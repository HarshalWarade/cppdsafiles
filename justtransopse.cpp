#include<iostream>
using namespace std;
    
int main() {
    
    int arr[4][4] = {{1,2,3,4}, {2,3,4,5}, {6,4,2,0}, {9,7,8,6}};
    
    for(int row = 0; row < 4; row++) {
        for(int col = 0; col < 4; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    
    for(int row = 0; row < 4; row++) {
        for(int col = 0; col < row; col++) {
            swap(arr[row][col], arr[col][row]);
        }
    }

    for(int row = 0; row < 4; row++) {
        for(int col = 0; col < 2; col++) {
            swap(arr[row][col], arr[row][4 - col - 1]);
        }
    }

    for(int row = 0; row < 4; row++) {
        for(int col = 0; col < 4; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    
    return 0;
}