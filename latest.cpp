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
void insertAtHead(Node* &head, int data) {
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}
void insertAtTail(Node* &tail, int data) {
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = tail -> next;
}
void insertAtPos(Node* &tail, Node* &head, int position, int data) {
    // inserting at start
    if(position == 1) {
        insertAtHead(head, data);
        return;
    }
    // going to the location
    Node* temp = head;
    int count = 1;
    while(count < position - 1) {
        temp = temp -> next;
        count++;
    }
    // inserting at last
    if(temp -> next == NULL) {
        insertAtTail(tail, data);
        return;
    }
    // creating a node for data
    Node* nodetoinsert = new Node(data);
    nodetoinsert -> next = temp -> next;
    temp -> next = nodetoinsert;
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
    Node* node1 = new Node(62);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtTail(tail, 16);
    print(head);
    insertAtTail(tail, 81);
    print(head);
    insertAtTail(tail, 87);
    print(head);
    insertAtPos(tail, head, 3, 73);
    print(head);
    return 0;
}