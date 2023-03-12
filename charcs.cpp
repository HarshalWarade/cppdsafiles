#include<iostream>
#include<vector>
using namespace std;

char returnMaxCount(string s) {
    vector<int>arr = {};
    for(int i = 0; i < 26; i++) {
        arr.push_back(0);
    }
    for(int j = 0; j < s.length(); j++) {
        char ch = s[j];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }
    int maxx = -1, ans = 0;
    for(int i = 0; i < 26; i++) {
        if(maxx < arr[i]) {
            ans = i;
            maxx = arr[i];
        }
    }
    return 'a' + ans;
}

int main()
{
    string s = "somethingrggeat";
    cout << returnMaxCount(s) << endl;
    return 0;
}