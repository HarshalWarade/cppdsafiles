#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr;
    arr.push_back(34);    
    arr.push_back(6);    
    arr.push_back(83);    
    arr.push_back(33);
    arr.push_back(54);
    arr.push_back(11);
    arr.push_back(65);
    cout << "Original Array: ";
    for(int i:arr) {
        cout << i << " ";
    }
    for(int i = 0; i < arr.size() - 1; i++) {
        for(int j = i+1; j < arr.size(); j++) {
            if(arr[j] < arr[i]) {
                swap(arr[i], arr[j]);
            }
        }
    }
    cout << endl;
    cout << "Ascended Array: ";
    for(int i:arr) {
        cout << i << " ";
    }
    return 0;
}