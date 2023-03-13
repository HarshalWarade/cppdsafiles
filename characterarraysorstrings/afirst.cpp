#include<iostream>
#include<string>
using namespace std;

int getLength(char arr[]) {
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++) {
        count++;
    }
    return count;
}

bool checkPalindrome(char arr[], int n) {
    int start = 0; int end = n - 1;
    while(start < end) {
        if(arr[start] != arr[end]) {
            return false;
        }
        start++; end--;
    }
    return true;
}

char toLowerCase(char ch) {
    char temp = ch - 'A' + 'a';
    return temp;
}

void reverseString(char arr[], int n) {
    int start = 0; int end = n - 1;
    while(start < end) {
        swap(arr[start++], arr[end--]);
    }
    cout << arr;
}

int main()
{
    // char arr[40];
    // cin >> arr;
    // int n = getLength(arr);
    // cout << toLowerCase('T');
    // reverseString(arr, n);
    // cout << checkPalindrome(arr, n) << endl;
    string s = "HaRsHAl";
    string te = "";
    for(int i = 0; i < s.length(); i++) {
        if((s[i] >= 'a') && (s[i] <= 'z')) {
            te.push_back(s[i]);
        } else {
            te.push_back(toLowerCase(s[i]));
        }
    }
    cout << te;
    return 0;
}