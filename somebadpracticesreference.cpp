#include<iostream>
using namespace std;

// the below function shall not be created, because the local variables will be deleted after execution of the function, and hence it could reference to some unwanted memory;
int& func(int n) {
    int num = n;
    int& u = n;
    return u;
}

int main() {
    func(9);
    return 0;
}