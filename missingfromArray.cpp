#include<iostream>
#include<vector>
using namespace std;

vector<int> findMissing(vector<int> ans, int n) {
    vector<int> plate; vector<int> reu;
    for(int i = 0; i <= n; i++) {
        plate.push_back(i);
    }
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(ans[j] < ans[i]) {
                swap(ans[i], ans[j]);
            }
        }
    }
    for(int i = 0; i < n - 1; i++) {
        if(ans[i] != plate[i]) {
            reu.push_back(i);
            return reu;
        }
    }
}

int main()
{
    
    vector<int> question;
    question.push_back(0);
    question.push_back(3);
    question.push_back(4);
    question.push_back(1);
    vector<int> ans = findMissing(question, question.size());
    for(int i:ans) {
        cout << i << " ";
    }
    return 0;
}