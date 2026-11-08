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
    Node* head = nullptr; int n, value, key;
    cout << "Number of nodes: "; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> value; Node* node = new Node(value);
        if (!head) head = node;
        else { Node* p = head; while (p->next) p = p->next; p->next = node; }
    }
    cout << "Insert before which value? "; cin >> key;
    cout << "New value: "; cin >> value;
    if (!head) cout << "Value not found\n";
    else if (head->data == key) { Node* node = new Node(value); node->next = head; head = node; }
    else {
        Node* prev = head; Node* current = head->next;
        while (current && current->data != key) { prev = current; current = current->next; }
        if (!current) cout << "Value not found\n";
        else { Node* node = new Node(value); prev->next = node; node->next = current; }
    }
    display(head); clear(head);
}
