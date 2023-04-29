#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;



int main() {

    int arr[10] = {5,5,5,5,5,5,5,5,5,1};
    int maxi = arr[0];
    int mini = arr[1];

    if(mini > maxi) {
        maxi = arr[1];
        mini = arr[0];
    }

    for(int i = 2; i < 10; i++) {
        if(arr[i] > maxi) {
            maxi = arr[i];
        } else if (arr[i] < mini) {
            mini = arr[i];
        }
    }

    cout << maxi << " " << mini;
    return 0;
}