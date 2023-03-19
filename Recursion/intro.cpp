// when a function calls itself, directly or indirectly, it is called as recursion.
// if solution of a big problem depends upon solution of similar type of small problem, then we're going to use recursion at its peak;
// recursive function should have a base case, and recursive relation.

#include<iostream>
using namespace std;

double factorial(int n) {
    if(n < 0) {
        return 0;
    }
    // baseCase
    if(n == 0) {
        return 1;
    }

    double smallerProblem = factorial(n - 1);
    double biggerProblem = n * smallerProblem;

    return biggerProblem;

}

int main() {
    
    double n;
    cin >> n;

    double ans = factorial(n);
    cout << ans;

    return 0;
}