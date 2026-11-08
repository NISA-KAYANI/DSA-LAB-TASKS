#include <iostream>
using namespace std;
int main() {
    int a[] = {10, 20, 30, 40, 50}, low = 0, high = 4, target = 40, index = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == target) { index = mid; break; }
        if (a[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    if (index != -1) cout << target << " found at index " << index << '\n';
    else cout << "Value not found\n";
}
