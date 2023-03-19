// There are basically two types of memories, the first one, that we generally use is the *STATIC* and the other one is the *HEAP* memory.
// The static memory is defined at the runtime by the compilers. We can not have variable address here.
// To access the heap memory we have to use *new* keyword, the generated elements on the heap always returns some address, which we have to store in a pointer, and later access accordingly.
// After usage, we should always delete the contents on the heap. *DELETE* keyword is used.

#include<iostream>
using namespace std;

int getSum(int *arr, int n) {
    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans += arr[i];
    }
    return ans;
}

int main() {

    int n; cin >> n;

    // it should be noted that the size of the array was defined at runtime and not at the compile time.
    int *arr = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ret = getSum(arr, n);
    cout << ret;

    delete []arr;
    return 0;
}