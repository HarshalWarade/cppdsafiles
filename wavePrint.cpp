#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[3][4]; vector<int>store = {};

    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 4; col++) {
            cin >> arr[row][col];
        }
    }

    for (int col = 0; col < 4; col++) {
        if (col & 1) {
            for(int row = 2; row >= 0; row--) {
                store.push_back(arr[row][col]);
            }
        } else {
            for(int row = 0; row < 3; row++) {
                store.push_back(arr[row][col]);
            }
        }
    }
    cout << endl;
    for(int i:store) {
        cout << i << " ";
    }
    return 0;
}