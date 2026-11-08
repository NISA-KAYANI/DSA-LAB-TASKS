#include <iostream>
using namespace std;
struct Node { int data; Node* prev; Node* next; Node(int v):data(v),prev(nullptr),next(nullptr){} };
void append(Node*& head, Node*& tail, int v) {
    Node* n=new Node(v); if(!head)head=tail=n; else{tail->next=n;n->prev=tail;tail=n;}
}
void display(Node* head){while(head){cout<<head->data;if(head->next)cout<<" <-> ";head=head->next;}cout<<'\n';}
void insertStart(Node*& head, Node*& tail, int v){
    Node* n=new Node(v); n->next=head; if(head)head->prev=n; else tail=n; head=n;
}
void insertAfter(Node*& head, Node*& tail, int key, int v){
    Node* p=head; while(p && p->data!=key)p=p->next;
    if(!p){cout<<"Product "<<key<<" not found\n";return;}
    Node* n=new Node(v); n->prev=p; n->next=p->next;
    if(p->next)p->next->prev=n; else tail=n; p->next=n;
}
void deleteFirst(Node*& head, Node*& tail){
    if(!head)return; Node* t=head; head=head->next;
    if(head)head->prev=nullptr; else tail=nullptr; delete t;
}
void deleteValue(Node*& head, Node*& tail, int v){
    Node* p=head; while(p && p->data!=v)p=p->next;
    if(!p){cout<<"Product "<<v<<" not found\n";return;}
    if(p->prev)p->prev->next=p->next; else head=p->next;
    if(p->next)p->next->prev=p->prev; else tail=p->prev;
    delete p;
}
void deleteLast(Node*& head, Node*& tail){
    if(!tail)return; Node* t=tail; tail=tail->prev;
    if(tail)tail->next=nullptr; else head=nullptr; delete t;
}
void clear(Node*& head){while(head){Node*t=head;head=head->next;delete t;}}
int main(){
    Node *head=nullptr,*tail=nullptr;
    for(int v:{101,102,103,104,105})append(head,tail,v);
    insertStart(head,tail,100);
    insertAfter(head,tail,103,1035);
    append(head,tail,106);
    deleteFirst(head,tail);
    deleteValue(head,tail,104);
    deleteLast(head,tail);
    cout<<"Final product list: ";display(head);clear(head);
}
