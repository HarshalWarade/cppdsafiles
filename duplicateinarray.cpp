#include <iostream>
using namespace std;

int findDuplicate(int arr[], int n) {
    bool duplicate = false; int duplicateValue;
    
    for(int i = 0; i<n; i++) {
        duplicateValue = arr[0];
        
        if(arr[i+1] == duplicateValue) {
            return duplicateValue;
        }
    }
}

int main() {

    int arr[6] = {1,3,5,1,7,9};

    findDuplicate(arr, 6);

    return 0;
}