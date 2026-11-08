#include <iostream>
using namespace std;
const int MAX = 5;
class Stack {
    int data[MAX];
    int topIndex;
public:
    Stack():topIndex(-1){}
    void push(int value){
        if(topIndex==MAX-1){cout<<"Stack overflow\n";return;}
        data[++topIndex]=value;
    }
    bool pop(int& value){
        if(topIndex==-1){cout<<"Stack underflow\n";return false;}
        value=data[topIndex--];return true;
    }
    int search(int x) const {
        int steps=1;
        for(int i=topIndex;i>=0;i--,steps++)if(data[i]==x)return steps;
        return -1;
    }
};
int main(){
    Stack s;int value;
    for(int i=0;i<MAX;i++){cout<<"Enter integer "<<i+1<<": ";cin>>value;s.push(value);}
    cout<<"Trying to push sixth value (999): ";s.push(999);
    cout<<"Search for 1st entered value: "<<s.search(1)<<" (steps from top; -1 means absent)\n";
    cout<<"Search for 999: "<<s.search(999)<<" (steps from top; -1 means absent)\n";
    cout<<"Popping all stack items:\n";
    while(s.pop(value))cout<<"Popped: "<<value<<'\n';
    cout<<"Trying one extra pop:\n";s.pop(value);
}
