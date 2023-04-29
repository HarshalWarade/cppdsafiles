#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* prev; Node* next;
    Node(int data) {
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }
};
void insertAtHead(Node* &head, int data) {
    if(head == NULL) {
        Node* temp = new Node(data);
        head = temp;
    } else {
        Node* temp = new Node(data);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}
void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    } cout << endl;
}
int getLength(Node* &head) {
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL) {
        cnt++;
        temp = temp -> next;
    }
    return cnt;
}
void insertAtTail(Node* &tail, int data) {
    Node* temp = new Node(data);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}
void insertAtPos(int position, Node* &tail, Node* &head, int data) {
    // insert at head (position == 1);
    if(position == 1) {
        insertAtHead(head, data);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < position - 1) {
        temp = temp -> next;
        cnt++;
    }
    // insert at any position
    if(temp -> next == NULL) {
        insertAtTail(tail, data);
        return;
    }
    Node* nodeToInsert = new Node(data);
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}
int main() {
    Node* node1 = new Node(15);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtHead(head, 52);
    print(head);
    insertAtHead(head, 63);
    print(head);
    insertAtHead(head, 89);
    print(head);
    insertAtTail(tail, 16);
    print(head);
    insertAtPos(6, tail, head, 62);
    print(head);
    cout << "length of linked list is " << getLength(head) << endl;
    return 0;
}