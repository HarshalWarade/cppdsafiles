#include<iostream>
#include<vector>
using namespace std;

int returnMinimum(int arr[], int size, int days) {
    vector<int> addCollection = {};
    for(int i = 0; i < size; i = i+2) {
        int first = arr[i];
        int second = arr[i+1];
        int adder = first + second;
        addCollection.push_back(adder);
    }
}

int main()
{
    int arr[6] = {3,2,2,4,1,4};
    returnMinimum(arr, 6, 3);
    return 0;
}