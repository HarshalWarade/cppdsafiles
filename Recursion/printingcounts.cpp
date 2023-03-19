#include<iostream>
using namespace std;

int count(int n) {
    // base case
    if(n == 0) {
        return 0;
    }

    count(n - 1);
    cout << n << " ";


    // recursive function

}

int main() {

    int n;
    cin >> n;
    count(n);
    cout << endl;
    return 0;
}