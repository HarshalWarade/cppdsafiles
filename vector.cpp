#include<iostream>
#include<vector>
// vector is a dyanamic array. Whenever the vector gets completely filled, it doubles it size. Creates another vector which has size double than the original one, and copies all the elements in the newly created vector.
using namespace std;
int main()
{
    vector<int> v;
    cout << v.size() << endl;
    
    // loading elements to vector (pushing);
    v.push_back(1);
    cout << v.size() << endl;
    v.push_back(1);
    cout << v.size() << endl;
    v.push_back(1);
    cout << "Size of the vector: " << v.size() << endl;
    cout << "Capacity of the vector: " << v.capacity() << endl;
    cout << "Front element: " << v.front() << endl;
    cout << "Back element: " << v.back() << endl;
    cout << "Back element: " << v.back() << endl;

    cout << "Vector before poping: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    v.pop_back();
    cout << endl;
    cout << "Vector after poping: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl;
    // Initialises a vector *arr* with size of 5 and every element 1;
    vector<int> arr(5,12);
    // for(int i = 0; i < arr.size(); i++) {
    //     cout << arr[i] << " ";
    // }

    for(int i:arr) {
        cout << i << " ";
    }


    cout << endl;
    // copying a vector to another vector;

    vector<int> copyOfarr(arr);
    for(int i:copyOfarr) {
        cout << i << " ";
    }
    return 0;
}