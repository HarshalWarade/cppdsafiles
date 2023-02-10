#include<iostream>
#include<vector>
using namespace std;

vector<int> merge(vector<int> arr1, vector<int> arr2, int n, int m) {  
    vector<int> ans; int allLength = (n+m);
    for(int i = 0; i<n; i++) {
        ans.push_back(arr1[i]);
    }
    for(int j = 0; j<m; j++) {
        ans.push_back(arr2[j]);
    }
    
    for(int i = 0; i < (allLength - 1); i++) {
        for(int j = i+1; j < allLength; j++) {
            if(ans[j] < ans[i]) {
                int store = ans[i];
                ans[i] = ans[j];
                ans[j] = store;
            }
        }
    }
    return ans;
}

int main()
{
    
    vector<int> arr1;
    arr1.push_back(3);
    arr1.push_back(7);
    arr1.push_back(9);
    arr1.push_back(12);
    arr1.push_back(13);

cout << "First Array: ";
for(int i:arr1) {
    cout << i << " ";
}
cout << endl;
    vector<int> arr2;
    arr2.push_back(1);
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(4);
    arr2.push_back(5);
cout << "Second Array: ";
for(int i:arr2) {
    cout << i << " ";
}
cout << endl;

    vector<int> ans = merge(arr1, arr2, arr1.size(), arr2.size());
    cout << "Merged Array: ";
    for(int i:ans) {
        cout << i << " ";
    }
    return 0;
}