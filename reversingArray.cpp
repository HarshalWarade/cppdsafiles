#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v) {
    int start = 0; int end = (v.size() - 1);
    while(start <= end) {
        swap(v[start], v[end]);
        start++; end--;
    }
    return v;
}

void print(vector<int> v) {
    for(int i:v) {
        cout << i << " ";
    }
}

int main()
{

    vector<int> v;
    v.push_back(11);
    v.push_back(2);
    v.push_back(56);
    v.push_back(23);
    v.push_back(98);

    vector<int> ans = reverse(v);

    print(ans);
    return 0;
}