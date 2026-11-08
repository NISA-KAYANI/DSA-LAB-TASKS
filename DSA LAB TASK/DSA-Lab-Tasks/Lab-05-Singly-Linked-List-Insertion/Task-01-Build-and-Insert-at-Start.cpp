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
    Node* head = nullptr; int n, value;
    cout << "How many initial nodes? "; cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Value: "; cin >> value;
        Node* node = new Node(value);
        if (!head) head = node;
        else { Node* p = head; while (p->next) p = p->next; p->next = node; }
    }
    cout << "Value to insert at beginning: "; cin >> value;
    Node* node = new Node(value); node->next = head; head = node;
    display(head); clear(head);
}
