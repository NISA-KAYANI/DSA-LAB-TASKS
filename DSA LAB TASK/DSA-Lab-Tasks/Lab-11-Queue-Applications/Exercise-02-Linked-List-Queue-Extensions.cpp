#include <iostream>
using namespace std;
struct Node{int data;Node* next;Node(int v):data(v),next(nullptr){}};
class Queue{
    Node* frontNode;Node* rearNode;
public:
    Queue():frontNode(nullptr),rearNode(nullptr){}
    ~Queue(){clearQueue();}
    void enqueue(int v){Node*n=new Node(v);if(!rearNode)frontNode=rearNode=n;else{rearNode->next=n;rearNode=n;}}
    void dequeue(){if(!frontNode){cout<<"Queue is empty\n";return;}Node*t=frontNode;frontNode=frontNode->next;if(!frontNode)rearNode=nullptr;delete t;}
    int countNodes()const{int count=0;for(Node*p=frontNode;p;p=p->next)count++;return count;}
    void displayRear()const{if(rearNode)cout<<"Rear value: "<<rearNode->data<<'\n';else cout<<"Queue is empty\n";}
    void clearQueue(){while(frontNode){Node*t=frontNode;frontNode=frontNode->next;delete t;}rearNode=nullptr;}
    void display()const{if(!frontNode){cout<<"Queue is empty\n";return;}for(Node*p=frontNode;p;p=p->next)cout<<p->data<<' ';cout<<'\n';}
};
int main(){
    Queue q;int n,value;cout<<"How many values (at least five recommended)? ";cin>>n;
    for(int i=0;i<n;i++){cout<<"Value: ";cin>>value;q.enqueue(value);}
    cout<<"Queue: ";q.display();cout<<"Node count: "<<q.countNodes()<<'\n';q.displayRear();
    cout<<"Clearing queue...\n";q.clearQueue();q.display();cout<<"Node count: "<<q.countNodes()<<'\n';
}
