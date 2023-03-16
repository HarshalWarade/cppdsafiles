#include<iostream>
using namespace std;

// Pass by Value
void update1(int n) {
    n++;
}

// Pass by reference
void update2(int& n) {
    n++;
}


int main()
{
    int a = 8;
    cout << "Before: " << a << endl;
    update2(a);
    cout << "After: " << a << endl;
    return 0;
}