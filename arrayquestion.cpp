#include<iostream>
using namespace std;
int main() {
    int stored = 0;
    int array1[] = {0,1,2,3,4,5,6,7,9,10};
    int i = 0;
    while(i<10){
        if(i != array1[i]){
            stored = i;
            break;
        } else {
            stored = 0;
        }
        i++;
    }
    cout << stored << endl;
    return 0;
}