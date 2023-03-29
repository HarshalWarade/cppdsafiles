#include<iostream>
using namespace std;

long long twoPower(int n) {
    // base case
    if(n == 0) {
        return 1;
    }
    int smaller = twoPower(n - 1);
    int bigger = 2 * smaller;
    return bigger;
}

int main() {

    int n;
    cin >> n;

    long long ans = twoPower(n);
    cout << ans << endl;
    return 0;
}