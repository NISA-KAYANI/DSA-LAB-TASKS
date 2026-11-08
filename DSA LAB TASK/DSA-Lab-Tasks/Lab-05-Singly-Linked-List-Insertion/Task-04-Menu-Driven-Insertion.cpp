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
    Node* head = nullptr; int choice, value, key;
    do {
        cout << "\n1. Insert at Start\n2. Insert at End\n3. Insert After Value\n4. Display\n5. Exit\nChoice: ";
        cin >> choice;
        if (choice == 1) {
            cout << "Value: "; cin >> value;
            Node* node = new Node(value); node->next = head; head = node;
        } else if (choice == 2) {
            cout << "Value: "; cin >> value;
            Node* node = new Node(value);
            if (!head) head = node;
            else { Node* p = head; while (p->next) p = p->next; p->next = node; }
        } else if (choice == 3) {
            cout << "Existing value: "; cin >> key; cout << "New value: "; cin >> value;
            Node* p = head; while (p && p->data != key) p = p->next;
            if (!p) cout << "Value not found\n";
            else { Node* node = new Node(value); node->next = p->next; p->next = node; }
        } else if (choice == 4) display(head);
        else if (choice != 5) cout << "Invalid choice\n";
    } while (choice != 5);
    clear(head);
}
