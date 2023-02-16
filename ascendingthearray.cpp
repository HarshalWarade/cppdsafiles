#include<iostream>
#include<vector>
using namespace std;

vector<int> ascendinglogic(vector<int> arr, int n, int key) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
    for(int i:arr) {
        cout << i << " ";
    }
}

int main()
{
    vector<int> userInputs;
    userInputs.push_back(34);
    userInputs.push_back(12);
    userInputs.push_back(58);
    userInputs.push_back(89);
    userInputs.push_back(43);
    userInputs.push_back(54);
    userInputs.push_back(67);
    int sizeofarray = userInputs.size();
    cout << "Original array: ";
    for(int i:userInputs){
        cout << i << " ";
    }
    cout << endl;
    cout << "Ascended Array: ";
    int key = 34;
    ascendinglogic(userInputs, sizeofarray, key);
    return 0;
}