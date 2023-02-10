#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n; cout << "Enter a number: "; cin >> n;
    int m = n;
    int mask = 0;
    if (n == 0){
        cout << 1 << endl;
    }
    while(m != 0){
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;
    cout << ans << endl;
}


// Summary //
// The thing is.. we took a number in n (say 5), the first step to do is take its negation, later the negation should be anded with the other thing that we are going to create.. we call it a mask.
// The creation of the mask is simple, just keep on right shifting 'n' till the n becomes 0, when it becomes zero began to left shifing it while oring the number the same number of time you made in right shifting it...