#include<iostream>
using namespace std;

long long getSum(int *arr, int n) {
    // base case
    if(n == 0) {
        return 0;
    } if(n == 1) {
        return (arr[0]);
    }

    int k = arr[0] + arr[1];
    int re = k + getSum(arr + 2, n - 2);
    return re;
}

int main() {

    int arr[5] = {3,5,7,8,2};

    long long sum = getSum(arr, 5);

    cout << sum << endl;
    return 0;
}