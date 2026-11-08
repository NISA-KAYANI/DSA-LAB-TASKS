#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    int* ptr = &number;
    int** pp = &ptr;

    cout << "Original value: " << **pp << '\n';
    **pp = 100;
    cout << "Modified value: " << number << '\n';
    return 0;
}
