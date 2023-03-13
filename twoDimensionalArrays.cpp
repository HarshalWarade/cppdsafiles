#include<iostream>
using namespace std;

bool isFound(int arr[][4], int target, int rows, int cols) {
    for(int rows = 0; rows < 3; rows++) {
        for(int cols = 0; cols < 4; cols++) {
            if(arr[rows][cols] == target) {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[3][4];
    for(int rows = 0; rows < 3; rows++) {
        for(int cols = 0; cols < 4; cols++) {
            cin >> arr[rows][cols];
        }
    }

    cout << "The 2D array is: " << endl;
    for(int rows = 0; rows < 3; rows++) {
        for(int cols = 0; cols < 4; cols++) {
            cout << arr[rows][cols] << " ";
        }
        cout << endl;
    }

    int target;
    cout << "Enter element to find: ";
    cin >> target;
    if(isFound(arr, target, 3, 4)) {
        cout << "Element found!";
    } else {
        cout << "Element not found!";
    }
    return 0;
}