#include<iostream>
#include<vector>
using namespace std;

vector<int> returnIntersection(vector<int> arr1, vector<int> arr2) {
    vector<int> storage;
    for(int i = 0; i < arr1.size(); i++) {
        for(int j = 0; j < arr2.size(); j++) {
            if((arr1[i] == arr2[j])) {
                storage.push_back(arr1[i]);
            }
        }
    }
    for (unsigned int i = 1 ; i < storage.size(); ++i) {
      for (unsigned int k = 0 ; k < i; ++k) {
         if ( storage.at(i) == storage.at(k) ) {
            storage.erase(storage.begin() + i);
            --i;
            break;
         }
      }
   }
    return storage;
}

int main() {
    vector<int> arr1;
    vector<int> arr2;
    arr1.push_back(1);arr1.push_back(2);arr1.push_back(2);arr1.push_back(1);
    arr2.push_back(2);arr2.push_back(2);
    int a = arr1.size(); int b = arr2.size();
    for(int i:arr1) {cout << i << " ";}
    cout << endl;
    for(int i:arr2) {cout << i << " ";}
    cout << endl;
    vector<int> holder = returnIntersection(arr1, arr2);
    for(int i:holder){
        cout << i << " ";
    }
    return 0;
}