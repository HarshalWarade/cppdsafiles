// A piece of code in a program that is replaced by value of macro

#include<iostream>

#define PI 3.14
// This creation of macro doesn't occupy any memory space, the value (PI) wherever written in the program will be replaced by 3.14 before compilation of code, without memory consumption. It is not a variable, and will be replaced before compilation, it can't be changed elsewhere in the code.

using namespace std;
    
int main() {
    
    cout << PI * 3;
    
    return 0;
}