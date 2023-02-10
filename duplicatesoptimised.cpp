#include<iostream>
using namespace std;

int findDuplicate(int arr[], int n) {
    int ans = 0;

    for(int i = 0; i<n; i++) {
        ans = ans ^ arr[i];
    }
    for(int i = 1; i<n; i++) {
        ans = ans ^ i;
    }
    return ans;
}

int main()
{
    
    int arr[7] = {2,5,3,5,7,8,9};

    cout << findDuplicate(arr, 7) << endl;

    return 0;
}