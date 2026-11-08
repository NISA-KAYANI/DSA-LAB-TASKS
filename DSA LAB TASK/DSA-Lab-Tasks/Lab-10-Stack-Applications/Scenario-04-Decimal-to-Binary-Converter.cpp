#include <iostream>
#include <stack>
using namespace std;
int main(){
    long long number;
    cout<<"Enter a non-negative decimal number: ";cin>>number;
    if(number<0){cout<<"Please enter a non-negative number.\n";return 0;}
    if(number==0){cout<<"Binary: 0\n";return 0;}
    stack<int> bits;
    while(number>0){bits.push(static_cast<int>(number%2));number/=2;}
    cout<<"Binary: ";
    while(!bits.empty()){cout<<bits.top();bits.pop();}
    cout<<'\n';
}
