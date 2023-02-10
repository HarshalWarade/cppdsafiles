#include<iostream>
#include<math.h>
using namespace std;

int ctBinary(int x){
    int totals = 0; int i = 0;
    while(x!=0){
        int captured = x & 1;
        totals = (captured * pow(10, i)) + totals;
        x = x >> 1;
        i++;
    }
    cout << totals << endl;
}

int main()
{
    ctBinary(4);
    return 0;
}