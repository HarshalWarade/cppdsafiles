#include<iostream>
using namespace std;

bool isPresent(int arr[], int size, int key) {
    int i = 0; int storage = false;
    while(i<size) {
        if(arr[i] == key) {
            storage = true;
            break;
        }
        i++;
    }
    return storage;
}

int main()
{
    int arr[10] = {4,2,8,6,1,23,65,87,34,12};
    int key; cout << "Enter the key to find: "; cin >> key;
    bool result = isPresent(arr, 10, key);
    if( result ) {
        cout << key << " is present." << endl;
    } else {
        cout << key << " is not present." << endl;
    }
    return 0;
}