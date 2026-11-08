#include <iostream>
using namespace std;
int main() {
    int a[5] = {20, 30, 40, 50}, n = 4, value = 15;
    for (int i = n; i > 0; i--) a[i] = a[i - 1];
    a[0] = value; n++;
    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
    cout << '\n';
}
