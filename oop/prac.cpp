#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class Hero {

    private:
    int health = 100;
    int level = 0;
    public:
    int getHealth() {
        return health; 
    }
    int getLevel() {
        return level;
    }
    void setHealth(int n) {
        health = n;
    }
    void setLevel(int n) {
        level = n;
    }
};

class Other {

    private:
    int quantity = 0;
    int price = 0;

    public: 
    void setQty(int n) {
        quantity = n;
    }
    void setPrice(int n) {
        price = n;
    }

};

int main() {

    Hero harshal;
    cout << endl;
    harshal.setHealth(400);
    harshal.setLevel(40);
    int holder = harshal.getHealth();
    int holder2 = harshal.getLevel();
    cout << "Health: " << holder << endl;
    cout << "Level: " << holder2 << endl;
    cout << endl;

    return 0;
}