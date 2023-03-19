#include<iostream>
using namespace std;

bool isPalindrom(string& s, int start, int end) {

    // base case
    if(start > end) {
        return true;
    }
    if(s[start] != s[end]) {
        return false;
    } else {
        // recursive call
        start++; end--;
        isPalindrom(s, start, end);
    }

}

int main() {

    string s = "harshal";

    bool pr = isPalindrom(s, 0, s.length() - 1);

    if(pr) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}