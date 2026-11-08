#include <iostream>
using namespace std;

int main() {
    char* character = new char;
    cout << "Enter a character: ";
    cin >> *character;

    cout << "Stored character: " << *character << '\n';
    delete character;
    character = nullptr;
    return 0;
}
