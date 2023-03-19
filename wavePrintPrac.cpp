#include <iostream>
using namespace std;

int main()
{

    int arr[4][4] = {{1, 2, 3, 4}, {2, 3, 4, 5}, {6, 4, 2, 0}, {9, 7, 8, 6}};
    
    for(int col = 0; col < 4; col++) {
        for(int row = 4 - 1; row >= 0; row--) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}