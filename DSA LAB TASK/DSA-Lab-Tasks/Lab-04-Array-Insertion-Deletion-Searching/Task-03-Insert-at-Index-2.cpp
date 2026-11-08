#include <iostream>
using namespace std;
int main() {
    int a[5] = {10, 20, 30, 40}, n = 4, index = 2, value = 25;
    if (index < 0 || index > n) {
        cout << "Invalid index\n"; return 0;
    }
    for (int i = n; i > index; i--) a[i] = a[i - 1];
    a[index] = value; n++;
    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
    cout << '\n';
}
