#include<iostream>
using namespace std;

int main() {
    
    int arr[4][4] = {{1,2,3,4}, {2,3,4,5}, {6,4,2,0}, {9,7,8,6}};
    
    for(int row = 0; row < 4; row++) {
        for(int col = 0; col < row; col++) {
            swap(arr[row][col], arr[col][row]);
        }
    }
    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j <2; j++) {
            swap(arr[i][j], arr[i][4 - j - 1]);
        }
    }
    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
        
    }
    return 0;
}