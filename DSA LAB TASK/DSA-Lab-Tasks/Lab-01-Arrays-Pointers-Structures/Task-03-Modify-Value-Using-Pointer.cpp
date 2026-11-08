#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    int* ptr = &number;
    cout << "Before modification: " << number << '\n';
    *ptr = *ptr + 10; // Increase the value by 10.
    cout << "After modification: " << number << '\n';
    return 0;
}
