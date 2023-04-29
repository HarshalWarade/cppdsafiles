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
    ~Node() {
        int value = this -> data;
        // memory free
        if(this -> next != NULL) {
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};
void insertAtHead(Node* &head, int data) {
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
void deleteNode(int position, Node* &head) {
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        
        // memory free of starting node
        temp -> next = NULL;
        delete temp;
    } else {
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}
int main() {
    Node* node1 = new Node(35);
    Node* head = node1;
    print(head);
    insertAtHead(head, 64);
    print(head);
    insertAtHead(head, 29);
    print(head);
    insertAtHead(head, 15);
    print(head);
    insertAtHead(head, 30);
    print(head);
    deleteNode(5, head);
    print(head);
    return 0;
}