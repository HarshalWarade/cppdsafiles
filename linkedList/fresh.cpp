#include<iostream>
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

void insertAtNode(Node* &head, int data) {
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int data) {
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = tail -> next;
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
    Node* tail = node1;
    print(head);
    insertAtTail(tail, 34);
    print(head);
    insertAtTail(tail, 58);
    print(head);
    
}