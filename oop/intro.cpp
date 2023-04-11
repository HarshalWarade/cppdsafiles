#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class Game {

    public:
    int totalUsers;


    Game() {
        cout << "Constructor called!" << endl;
    }


    Game(int totalUsers) {
        cout << "In the constructor: " << this << endl;
        this->totalUsers = totalUsers;
    }

    int exp;
    bool isActive;
    void settotalUsers(int n) {
        totalUsers = n;
    }
    int gettotalUsers() {
        return totalUsers;
    }
    void setExp(int n) {
        exp = n;
    }
};

int main() {


    // static object creation
    Game round1(10);
    cout << "In the main function: " << &round1 << endl;
    // round1.settotalUsers(40);
    cout << round1.gettotalUsers() << endl;

    Game *g = new Game;




    // round1.exp = 1200;
    // round1.settotalUsers(34);
    // round1.isActive = true;
    
    // // cout << round1.exp << endl;
    // // cout << round1.gettotalUsers() << endl;
    
    // Game *h = new Game;

    // h->setExp(90);

    // cout << (*h).exp << endl;
    // cout << h->exp << endl;
    // // if(round1.isActive == true) {
    // //     cout << "Active" << endl;
    // // } else {
    // //     cout << "Unavailable" << endl;
    // // }

    return 0;
}

// created a class, created an object, leant public & private, leant to use setter and getters.

// Look for *padding* & *greedy alignment*

// A very important note... 
// "this" keyword is actually a block of memory which stores the address of currently created object.