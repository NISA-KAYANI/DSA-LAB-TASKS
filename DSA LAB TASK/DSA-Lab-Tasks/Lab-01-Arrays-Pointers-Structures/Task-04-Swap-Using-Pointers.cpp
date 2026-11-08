#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int* pA = &a;
    int* pB = &b;

    cout << "Before swapping: a = " << a << ", b = " << b << '\n';
    int temp = *pA;
    *pA = *pB;
    *pB = temp;
    cout << "After swapping:  a = " << a << ", b = " << b << '\n';
    return 0;
}
