#include<iostream>
#include<vector>
using namespace std;

vector<int> maxfromVector(vector<int> arr, int n) {
    cout << arr.size() << endl;
    cout << arr.capacity() << endl;
    for(int i:arr) {
        cout << i << " ";
    }
}

int main()
{
    vector<int> harshal;
    harshal.push_back(20);
    harshal.push_back(2);
    harshal.push_back(34);
    harshal.push_back(12);
    harshal.push_back(7);
    int harshalLength = harshal.size();
    maxfromVector(harshal, harshalLength);
    return 0;
}