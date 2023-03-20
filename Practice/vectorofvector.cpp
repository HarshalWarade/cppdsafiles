#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>something() {
    
    // creating a 2D vector
    
    vector<vector<int>>something;

    for(int row = 0; row < 4; row++) {
        vector<int>appender;
        for(int j = 0; j < 5; j++) {
            appender.push_back(row);            
        }
        something.push_back(appender);
    }
    return something;
}

int main() {

    vector<vector<int>>has = something();

    vector<int>spiralAns = {};
    int rows = has.size();
    int cols = has[0].size();
    
    int count = 0;
    int total = rows * cols;

    // indexes
    int startingRow = 0;
    int endingRow = rows - 1;
    int startingCol = 0;
    int endingCol = cols - 1;

    while(count < total) {
        // print starting row
        for(int i = startingCol; count < total && i <= endingCol; i++) {
            spiralAns.push_back(has[startingRow][i]);
            count++;
        }
        startingRow++;
        // printing ending col
        for(int i = startingRow; count < total && i <= endingRow; i++) {
            spiralAns.push_back(has[i][endingCol]);
            count++;
        }
        endingCol--;
        // printing ending row
        for(int i = endingCol; count < total && i >= startingCol; i--) {
            spiralAns.push_back(has[endingRow][i]);
            count++;
        }
        endingRow--;
        // for starting Col
        for(int i = endingRow; count < total && i >= startingRow; i--) {
            spiralAns.push_back(has[i][startingCol]);
            count++;
        }
        startingCol++;
    }

    for(int i:spiralAns) {
        cout << i << " ";
    }

    return 0;
}