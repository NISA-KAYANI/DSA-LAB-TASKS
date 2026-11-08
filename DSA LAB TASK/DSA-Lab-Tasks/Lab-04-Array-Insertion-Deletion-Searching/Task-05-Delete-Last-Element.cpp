#include <iostream>
using namespace std;
int main() {
    int a[5] = {10, 20, 30, 40, 50}, n = 5;
    if (n > 0) n--;
    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
    cout << '\n';
}
