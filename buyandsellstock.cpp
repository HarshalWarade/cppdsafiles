#include<iostream>
#include<vector>
using namespace std;
int main(){
    class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int sell = 0; int buy = prices[0];
    for(int i = 0; i < prices.size(); i++) {
        buy = std::min(buy, prices[i]);
        int difference = prices[i] - buy;
        sell = std::max(sell, difference);
    }
    return sell;
    }
};
}