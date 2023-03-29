#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;



int main() {
    vector<string> ans = {};
    
    string s = "this is a string";
    string k;
    for(int i = 0; i < s.length(); i++) {
        k = "";
        if(((s[i] >= 'a') && (s[i] <= 'z')) || ((s[i] >= '0') && (s[i] <= 9))) {
            // ans.push_back(s[i]);
        }
    }
    for(int i = 0; i < s.length(); i++) {
        cout << ans[i] << endl;
    }
    cout << k;
    return 0;
}