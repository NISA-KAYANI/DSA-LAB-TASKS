#include <iostream>
using namespace std;
int main() {
    int a[] = {10, 20, 30, 40, 50}, n = 5, target = 40, index = -1;
    for (int i = 0; i < n; i++)
        if (a[i] == target) { index = i; break; }
    if (index != -1) cout << target << " found at index " << index << '\n';
    else cout << "Value not found\n";
}
