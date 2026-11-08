#include <iostream>
using namespace std;
int main() {
    int a[6] = {10, 20, 30, 40, 50}, n = 5;
    a[n++] = 60;
    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
    cout << '\n';
}
