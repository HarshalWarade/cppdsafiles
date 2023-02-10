#include<iostream>
using namespace std;
int main(){
    int n; int ans = 0; int i = 0;
    cout << "Enter a number: "; cin >> n;
    while(n != 0){
        int digit = n % 10;
        if((ans > INT16_MAX/10) || (ans<INT16_MIN)){
            return 0;
        }
        ans = (ans * 10) + digit;
        n = n / 10;
        i++;
    }
    cout << ans << endl;
    return 0;
}