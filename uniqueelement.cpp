#include<iostream>
using namespace std;

int findUnique(int arr[], int n) {

    int ans = 0;

    for(int i = 0; i<n; i++) {
        ans = ans ^ arr[i];
    }

    return ans;
}

int main()
{

    int arr[5] = {3,2,3,4,2};
    cout << findUnique(arr, 5) << endl;

    return 0;
}