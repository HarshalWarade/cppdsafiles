#include<iostream>
using namespace std;



int main()
{
    int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,3,4,6}};

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Wave Printing...

    int row = 3, col = 4;

    return 0;
}