#include<iostream>
#include<vector>
using namespace std;

int anding(int left, int right, int lenght) {
    int ander = 1; vector<int> com;
    for(int i = left; i <= right; i++) {
        com.push_back(i);
    }
    for(int i = left; i < right; i++) {
        ander = ander & com[i];
    }
    return ander;
}

int main()
{
    int right = 5;
    int left = 7;
    int length = (left - right + 1);
    cout << anding(left, right, length);   
    return 0;
}