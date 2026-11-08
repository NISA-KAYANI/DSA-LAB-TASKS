#include <iostream>
using namespace std;

int main() {
    int numbers[10], positive = 0, negative = 0, zero = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Enter integer " << i + 1 << ": ";
        cin >> numbers[i];
        if (numbers[i] > 0) positive++;
        else if (numbers[i] < 0) negative++;
        else zero++;
    }
    cout << "Positive numbers: " << positive
         << "\nNegative numbers: " << negative
         << "\nZeros: " << zero << '\n';
    return 0;
}
