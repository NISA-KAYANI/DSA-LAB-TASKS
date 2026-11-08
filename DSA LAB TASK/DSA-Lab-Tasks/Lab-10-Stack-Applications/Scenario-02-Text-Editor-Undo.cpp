#include <iostream>
#include <string>
using namespace std;
struct Node{string word;Node* next;Node(string w):word(w),next(nullptr){}};
class WordStack{
    Node* topNode;int count;
public:
    WordStack():topNode(nullptr),count(0){}
    ~WordStack(){while(topNode){Node*t=topNode;topNode=topNode->next;delete t;}}
    void type(const string& word){Node*n=new Node(word);n->next=topNode;topNode=n;count++;cout<<"Typed: "<<word<<'\n';}
    void undo(){if(!topNode){cout<<"Nothing to undo\n";return;}Node*t=topNode;topNode=topNode->next;cout<<"Undone: "<<t->word<<'\n';delete t;count--;}
    int size()const{return count;}
    void peek()const{if(topNode)cout<<"Last word: "<<topNode->word<<'\n';else cout<<"Editor is empty\n";}
    void display()const{cout<<"Words (latest first): ";for(Node*p=topNode;p;p=p->next)cout<<p->word<<' ';cout<<"\nWord count: "<<count<<'\n';}
};
int main(){
    WordStack editor;int choice;string word;
    do{cout<<"\n1. Type word\n2. Undo\n3. Word count\n4. Last word\n5. Show words\n6. Exit\nChoice: ";cin>>choice;
        if(choice==1){cout<<"Word: ";cin>>word;editor.type(word);}
        else if(choice==2)editor.undo();
        else if(choice==3)cout<<"Word count: "<<editor.size()<<'\n';
        else if(choice==4)editor.peek();
        else if(choice==5)editor.display();
        else if(choice!=6)cout<<"Invalid choice\n";
    }while(choice!=6);
}
