#include <iostream>
using namespace std;

int main()
{
    int x, store = 0, remainder, product = 1;
    cin >> x;
    while (x != 0)
    {
        remainder = x % 2;
        store = store + (remainder * product);
        x = x / 2;
        product = product * 10;
    }
    cout << store << endl;
    cout << (store & 1) << endl;
    return 0;
}