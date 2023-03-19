#include<iostream>
using namespace std;

int getSum(int *arr, int size) {
    int ans = 0;
    //base case

    if(size == 0) {
        return 0;
    } if (size == 1) {
        return arr[0];
    }

    ans = arr[0] + arr[1];

    int another = ans + getSum(arr + 2, size - 2);
    return another;

}

int main() {

    int arr[2] = {3,2};
    int size = 2;

    int gotSum = getSum(arr, size);

    cout << gotSum;

    return 0;
}