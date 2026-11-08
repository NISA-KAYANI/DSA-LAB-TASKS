#include <iostream>
using namespace std;
const int SIZE=6;
class Queue{
    int data[SIZE],frontIndex,rearIndex,count;
public:
    Queue():frontIndex(0),rearIndex(-1),count(0){}
    void enqueue(int token){
        if(count==SIZE){cout<<"Waiting room is full\n";return;}
        rearIndex=(rearIndex+1)%SIZE;data[rearIndex]=token;count++;
        cout<<"Token "<<token<<" issued\n";
    }
    void dequeue(){
        if(count==0){cout<<"Nobody is waiting\n";return;}
        cout<<"Serving token "<<data[frontIndex]<<'\n';
        frontIndex=(frontIndex+1)%SIZE;count--;
    }
    void display()const{
        if(count==0){cout<<"No waiting customers\n";return;}
        cout<<"Waiting tokens: ";
        for(int i=0;i<count;i++)cout<<data[(frontIndex+i)%SIZE]<<' ';
        cout<<'\n';
    }
};
int main(){
    Queue q;int choice,nextToken=1,token;
    do{cout<<"\n1. Issue token\n2. Serve customer\n3. Show waiting customers\n4. Exit\nChoice: ";cin>>choice;
        if(choice==1)q.enqueue(nextToken++);
        else if(choice==2)q.dequeue();
        else if(choice==3)q.display();
        else if(choice!=4)cout<<"Invalid choice\n";
    }while(choice!=4);
}
