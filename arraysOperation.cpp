// adding +1 to the last element of array: 

#include<iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int> solver, int n) {
    vector<int> returnArray;
    returnArray.push_back(solver[n] + 1);
    for(int i:returnArray) {
        cout << i << " ";
    }
}

int main()
{
    vector<int> givenArray;
    givenArray.push_back(1);
    givenArray.push_back(2);
    givenArray.push_back(3);
    givenArray.push_back(9);
    int n = givenArray.size();
    plusOne(givenArray, (n - 1));
    return 0;
}