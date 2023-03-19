#include<iostream>
using namespace std;

long power2(int n) {

    // base case
    if(n == 0) {
        return 1;
    }
    // recursie relation
    // int smaller = power2(n - 1);
    // int bigger = 2 * smaller;
    // simple return
    return 2 * (power2(n-1));
}

int main() {

    int n;
    cin >> n;
    long ans = power2(n);
    cout << ans;

    return 0;
}