#include <iostream>
using namespace std;
int main() {
    int a[5] = {10, 20, 30, 40, 50}, n = 5, index = 2;
    for (int i = index; i < n - 1; i++) a[i] = a[i + 1];
    n--;
    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
    cout << '\n';
}
