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
};

void insert(Node* &head, int data) {
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {

    Node* node1 = new Node(40);

    Node* head = node1;

    print(head);
    insert(head, 75);
    print(head);
    insert(head, 65);
    print(head);
    insert(head, 13);
    print(head);
    insert(head, 98);
    print(head);

    return 0;
}