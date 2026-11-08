#include <iostream>
using namespace std;
const int SIZE=4;
class CircularQueue{
    int jobs[SIZE],frontIndex,rearIndex,count;
public:
    CircularQueue():frontIndex(0),rearIndex(-1),count(0){}
    void enqueue(int job){
        if(count==SIZE){cout<<"Printer queue is full; job "<<job<<" rejected\n";return;}
        rearIndex=(rearIndex+1)%SIZE;jobs[rearIndex]=job;count++;
        cout<<"Added job "<<job<<" (front="<<frontIndex<<", rear="<<rearIndex<<", count="<<count<<")\n";
    }
    void dequeue(){
        if(count==0){cout<<"Printer queue is empty\n";return;}
        cout<<"Printed job "<<jobs[frontIndex]<<'\n';
        frontIndex=(frontIndex+1)%SIZE;count--;
        if(count==0){frontIndex=0;rearIndex=-1;}
        cout<<"State: front="<<frontIndex<<", rear="<<rearIndex<<", count="<<count<<'\n';
    }
    void display()const{
        if(count==0){cout<<"No print jobs\n";return;}
        cout<<"Jobs from front: ";
        for(int i=0;i<count;i++)cout<<jobs[(frontIndex+i)%SIZE]<<' ';
        cout<<"\nfront="<<frontIndex<<", rear="<<rearIndex<<", count="<<count<<'\n';
    }
};
int main(){
    CircularQueue q;
    q.enqueue(101);q.enqueue(102);q.enqueue(103);q.enqueue(104);
    q.enqueue(105); // Full queue: this job is rejected.
    q.dequeue();q.dequeue();
    q.enqueue(105);q.enqueue(106);
    cout<<"\nFinal circular queue:\n";q.display();
}
