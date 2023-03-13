#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[26] = {0};
    string s = "harshal";
    for(int i = 0; i < s.length(); i++) {
        int k = s[i] - 'a';
        arr[k]++;
    }
    int maxx = -1;
    for(int i = 0; i < 26; i++) {
        if(maxx < arr[i]) {
            maxx = arr[i];
            
        }
    }
    return 0;
}