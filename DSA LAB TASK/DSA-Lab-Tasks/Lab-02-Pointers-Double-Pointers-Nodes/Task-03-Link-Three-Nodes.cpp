#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

int main() {
    Node* first = new Node(90);
    Node* second = new Node(30);
    Node* third = new Node(10);

    first->next = second;
    second->next = third;

    Node* current = first;
    cout << "Linked list: ";
    while (current != nullptr) {
        cout << current->data;
        if (current->next != nullptr) cout << " -> ";
        current = current->next;
    }
    cout << '\n';

    delete first;
    delete second;
    delete third;
    return 0;
}
