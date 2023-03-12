#include<iostream>
using namespace std;

int k(int a[], int size) {
    int f = a[0];
    int count = 0;
    for(int i = 1; i<size; i++) {
        if(f<a[i]) {
            f = a[i];
        }
        else{
        count++;
        }
    }
    if(count>0) {
        return false;
    }
    return true;
}

int main()
{
    int a[] = {4,2,3};
    cout<<k(a,3);
return 0;
}