#include <iostream>
#include <string>
using namespace std;
struct Node{string page;Node* next;Node(string p):page(p),next(nullptr){}};
class BrowserHistory{
    Node* top;
public:
    BrowserHistory():top(nullptr){}
    ~BrowserHistory(){while(top){Node*t=top;top=top->next;delete t;}}
    void visit(const string& page){Node*n=new Node(page);n->next=top;top=n;cout<<"Visited: "<<page<<'\n';}
    void back(){
        if(!top||!top->next){cout<<"Cannot go back\n";return;}
        Node*t=top;top=top->next;cout<<"Back from "<<t->page<<" -> Current page: "<<top->page<<'\n';delete t;
    }
    void current()const{if(top)cout<<"Current page: "<<top->page<<'\n';else cout<<"No page open\n";}
    void history()const{if(!top){cout<<"History is empty\n";return;}cout<<"History (current to oldest): ";for(Node*p=top;p;p=p->next){cout<<p->page;if(p->next)cout<<" -> ";}cout<<'\n';}
};
int main(){
    BrowserHistory browser;int choice;string page;
    do{cout<<"\n1. Visit page\n2. Back\n3. Current page\n4. History\n5. Exit\nChoice: ";cin>>choice;
        if(choice==1){cout<<"Page name: ";getline(cin>>ws,page);browser.visit(page);}
        else if(choice==2)browser.back();
        else if(choice==3)browser.current();
        else if(choice==4)browser.history();
        else if(choice!=5)cout<<"Invalid choice\n";
    }while(choice!=5);
}
