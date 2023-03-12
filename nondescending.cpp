#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int returnSomething(vector<int>array, int size) {
    int hold = array[0];
    int count = 0;
    for(int i = 1; i < size; i++) {
        if(hold < array[i]) {
            hold = array[i];
        }
        else {
            count++;
        }
    }
}

int main()
{
    vector<int> array = {4,2,3};
    
    cout << hasDuplicates << endl;
    return 0;
}