#include <iostream>
using namespace std;

class Node{
    public:
        int value;
        Node *next;
};

void printLinkedList(Node *n) {
    while(n != NULL) {
        cout << n->value << " ";
        n = n->next;
    }
}
int main() {
    int n;
    
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    head->value = 8;
    second->value = 9;
    third->value = 10;
    head->next = second;
    second->next = third;
    printLinkedList(head);
    return 0;
}