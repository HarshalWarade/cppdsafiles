#include<iostream>
using namespace std;

void update(int n) {
    // this is pass by value, as we are passing value to the function.
    // this creates a new copy of the variable that is passed from main to the required function. Every change is made to the copy and not to the original one. *IT WILL NOT USE THE SAME MEMORY FOR OPERATIONS*
    n++;
}

void modify(int& n) {
    // this is the case of pass by reference, as a reference is passed in the function as a parameter.
    // this *USES THE SAME MEMORY FOR THE OPERATIONS, BUT ACCESS IT WITH DIFFERENT NAME*
    n++;
}

int main() {

    int a = 8;
    update(a);
    cout << "After update: " << a << endl;
    modify(a);
    cout << "After modify: " << a << endl;
    return 0;
}