#include<iostream>
using namespace std;

void reverse(string& s, int start, int end) {

    // base case
    if(start > end) {
        return;
    }
    swap(s[start], s[end]);
    start++; end--;
    
    // recursive call
    reverse(s, start, end);

}

int main() {

    string s = "harshal";
    reverse(s, 0, s.length() - 1);
    cout << s << endl;

    return 0;
}