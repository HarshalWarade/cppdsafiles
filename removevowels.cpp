#include<iostream>
#include<string>
using namespace std;
string removeVowels(string s) {
    for(int i = 0; i < s.length(); i++) {
        if((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u')) {
            s.erase(i, 1);
        }
    }
    return s;
}
int main() {
    string s = "hayyp";
    cout << removeVowels(s);
    return 0;
}