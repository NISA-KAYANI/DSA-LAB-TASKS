#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void reverseQueue(queue<int>& q){
    stack<int> s;
    while(!q.empty()){s.push(q.front());q.pop();}
    while(!s.empty()){q.push(s.top());s.pop();}
}
int main(){
    queue<int> q;int n,value;
    cout<<"How many queue elements? ";cin>>n;
    for(int i=0;i<n;i++){cout<<"Enter value: ";cin>>value;q.push(value);}
    cout<<"Original queue: ";
    queue<int> copy=q;while(!copy.empty()){cout<<copy.front()<<' ';copy.pop();}
    reverseQueue(q);
    cout<<"\nReversed queue: ";
    while(!q.empty()){cout<<q.front()<<' ';q.pop();}
    cout<<'\n';
}
