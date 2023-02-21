#include <iostream>
#include<vector>
using namespace std;

long long kthSmallestProduct(vector<int> nums1, vector<int> nums2, long long k)
{
    vector<int> storageInt = {};
    for (int i = 0; i < nums1.size(); i++){
        for (int j = 0; j < nums2.size(); j++){
            storageInt.push_back(nums1[i] * nums2[j]);
        }
    }
    for (int i = 0; i < storageInt.size() - 1; i++){
        for (int j = i + 1; j < storageInt.size(); j++){
            if (storageInt[i] > storageInt[j]){
                swap(storageInt[i], storageInt[j]);
            }
        }
    }
    return (storageInt[k - 1]);
}

int main()
{
    vector<int> nums1 = {};
    nums1.push_back(-100000);
    nums1.push_back(100000);
    vector<int> nums2 = {};
    nums2.push_back(-100000);
    nums2.push_back(100000);
    cout << kthSmallestProduct(nums1, nums2, 2) << endl;
    return 0;
}