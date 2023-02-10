#include<iostream>
using namespace std;

int uniqueOccurrences(int arr[], int n) {
    int ans = 0; int counter = 0;

    for(int i = 0; i<n; i++) {

        if(ans^arr[i] == 0) {
            counter++;
        }
        
    }
}

int main()
{

    int arr[6] = {1,1,1,2,2,3};

    uniqueOccurrences(arr, 6);

    return 0;
}