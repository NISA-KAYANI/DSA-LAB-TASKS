#include <iostream>
using namespace std;
struct Node { int data; Node* next; Node(int v): data(v), next(nullptr) {} };
void display(Node* head) {
    if (!head) { cout << "List is empty\n"; return; }
    while (head) { cout << head->data; if (head->next) cout << " -> "; head = head->next; }
    cout << '\n';
}
void clear(Node*& head) { while (head) { Node* temp = head; head = head->next; delete temp; } }

int main() {
    Node* head = nullptr;
    for (int v : {10, 20, 30, 40, 50}) {
        Node* node = new Node(v);
        if (!head) head = node; else { Node* p=head; while(p->next)p=p->next; p->next=node; }
    }
    for (int i = 0; i < 2; i++) {
        if (head) { Node* temp = head; head = head->next; delete temp; }
        display(head);
    }
    clear(head);
}
