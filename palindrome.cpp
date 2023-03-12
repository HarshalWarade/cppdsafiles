#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    if(x == 0) {
        return true;
    }
    if(x%10 == 0) {
        return false;
    }
    vector<int> sto = {};
    while(x > 0) {
        int ad = x % 10;
        sto.push_back(ad);
        x = x / 10;
    }
    vector<int> other = sto;
    reverse(other.begin(), other.end());
    for(int i = 0; i < sto.size(); i++) {
        if(sto[i] == other[i]) {
            return true;
        }
    }
    if(sto.size() == 1) {
        return true;
    }
    return false;
}

int main()
{
    cout << isPalindrome(123) << endl;
    return 0;
}