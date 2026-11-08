#include <iostream>
using namespace std;
struct Node { int data; Node* next; Node(int v): data(v), next(nullptr) {} };
void display(Node* head) {
    if (!head) { cout << "List is empty\n"; return; }
    while (head) { cout << head->data; if (head->next) cout << " -> "; head = head->next; }
    cout << '\n';
}
void clear(Node*& head) { while (head) { Node* temp = head; head = head->next; delete temp; } }

void deleteByValue(Node*& head, int value) {
    if (!head) { cout << "Value not found\n"; return; }
    if (head->data == value) {
        Node* temp = head; head = head->next; delete temp; return;
    }
    Node* prev = head;
    Node* current = head->next;
    while (current && current->data != value) {
        prev = current; current = current->next;
    }
    if (!current) { cout << "Value not found\n"; return; }
    prev->next = current->next;
    delete current;
}
int main() {
    Node* head = nullptr; int n, value, target;
    cout << "Number of nodes: "; cin >> n;
    for (int i=0;i<n;i++) {
        cin >> value; Node* node=new Node(value);
        if(!head) head=node; else {Node* p=head; while(p->next)p=p->next; p->next=node;}
    }
    cout << "Value to delete: "; cin >> target;
    deleteByValue(head,target); display(head); clear(head);
}
