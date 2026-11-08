#include <iostream>
using namespace std;
struct Node { int data; Node* next; Node(int v): data(v), next(nullptr) {} };
void display(Node* head) {
    if (!head) { cout << "List is empty\n"; return; }
    while (head) { cout << head->data; if (head->next) cout << " -> "; head = head->next; }
    cout << '\n';
}
void clear(Node*& head) { while (head) { Node* temp = head; head = head->next; delete temp; } }

void deleteAtEnd(Node*& head) {
    if (!head) return;
    if (!head->next) { delete head; head = nullptr; return; }
    Node* p = head;
    while (p->next->next) p = p->next;
    delete p->next; p->next = nullptr;
}
void deleteAtPosition(Node*& head, int position) {
    if (position < 1 || !head) return;
    if (position == 1) { Node* t=head; head=head->next; delete t; return; }
    Node* p=head;
    for (int i=1; p && i<position-1; i++) p=p->next;
    if (p && p->next) { Node* t=p->next; p->next=t->next; delete t; }
}
int main() {
    Node* head = nullptr;
    for (int v : {10,20,30,40,50}) {
        Node* node=new Node(v);
        if(!head) head=node; else {Node* p=head; while(p->next)p=p->next; p->next=node;}
    }
    deleteAtEnd(head); display(head);
    deleteAtPosition(head, 2); display(head);
    clear(head);
}
