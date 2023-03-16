#include <bits/stdc++.h> 
#include<iostream>
#include<string>
using namespace std;
bool valid(char ch) {
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
        return true;
    }

    return false;
}

char tolowerCase(char ch) {
    if(ch >= 'a' && ch <= 'z') {
        return ch;
    } else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool pal(string s) {
    int start = 0; int end = s.length() - 1;
    while(start <= end) {
        if(tolowerCase(s[start]) == tolowerCase(s[end])) {
            start++; end--;
        } else {
            return false;
        }
    }
    return true;
}

bool checkPalindrome(string s)
{
    string temp = "";
    for(int i = 0; i < s.length(); i++) {
        if(valid(s[i])) {
            temp.push_back(s[i]);
        }
    }
    if(pal(temp)) {
        return true;
    }
    return false;
}

int main(){
    cout << checkPalindrome("har#Ah");
}