#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
    // destructor
};

int main() {
    Node* node1 = new Node(34);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;
    return 0;
}