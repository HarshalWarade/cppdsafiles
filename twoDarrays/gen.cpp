#include<iostream>
using namespace std;
int main()
{
    int arr[3][4];
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 4; col++) {
            cin >> arr[row][col];
        }
    }

    int maxi = -1;
    for(int row = 0; row < 3; row++) {
        int ans = 0;
        for(int col = 0; col < 4; col++) {
            ans = ans + arr[row][col];
            if(ans > maxi) {
                maxi = ans;
            }
        }
        cout << ans << " ";
    }
    cout << endl;
    cout << maxi;
    return 0;
}