#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class Game {

    private:
    int totalUsers;
    public:
    int exp;
    bool isActive;
    void settotalUsers(int n) {
        totalUsers = n;
    }
    int gettotalUsers() {
        return totalUsers;
    }
};

int main() {

    Game round1;
    round1.exp = 1200;
    round1.settotalUsers(34);
    round1.isActive = true;
    
    cout << round1.exp << endl;
    cout << round1.gettotalUsers() << endl;
    if(round1.isActive == true) {
        cout << "Active" << endl;
    } else {
        cout << "Unavailable" << endl;
    }

    return 0;
}

// created a class, created an object, leant public & private, leant to use setter and getters.

// Look for *padding* & *greedy alignment*