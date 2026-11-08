#include <iostream>
using namespace std;
struct Node { int data; Node* prev; Node* next; Node(int v):data(v),prev(nullptr),next(nullptr){} };
void append(Node*& head, Node*& tail, int v) {
    Node* n=new Node(v); if(!head) head=tail=n; else {tail->next=n; n->prev=tail; tail=n;}
}
void display(Node* head) { while(head){cout<<head->data; if(head->next)cout<<" <-> "; head=head->next;} cout<<'\n'; }
void clear(Node*& head) { while(head){Node* t=head; head=head->next; delete t;} }
int main() {
    Node *head=nullptr,*tail=nullptr;
    for(int v:{10,20,30,40,50}) append(head,tail,v);
    Node* five=new Node(5); five->next=head; head->prev=five; head=five;
    Node* p=head; while(p && p->data!=20)p=p->next;
    if(p){Node* n=new Node(25); n->next=p->next; n->prev=p; if(p->next)p->next->prev=n; else tail=n; p->next=n;}
    append(head,tail,60);
    display(head); clear(head);
}
