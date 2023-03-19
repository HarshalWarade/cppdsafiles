#include<iostream>
using namespace std;

inline int getMax(int& a, int& b) {
    a++; b++;
    return (a>b) ? a : b;
}

// wherever the function is called, it will replace it with the function body, good readability, no function call, no additional storage, increases the efficiency of code.

int main() {
    
    int a = 1; int b = 2;
    int maxi = getMax(a, b);
    cout << maxi << endl;
    cout << a << " " << b;
    return 0;
}