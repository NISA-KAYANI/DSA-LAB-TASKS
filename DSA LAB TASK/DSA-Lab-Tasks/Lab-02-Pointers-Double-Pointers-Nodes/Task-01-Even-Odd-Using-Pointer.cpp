#include <iostream>
using namespace std;

int main() {
    int values[5], even = 0, odd = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> values[i];
    }

    int* ptr = values;
    for (int i = 0; i < 5; i++, ptr++) {
        cout << *ptr << " is " << ((*ptr % 2 == 0) ? "Even" : "Odd") << '\n';
        if (*ptr % 2 == 0) even++;
        else odd++;
    }
    cout << "Even count: " << even << "\nOdd count: " << odd << '\n';
    return 0;
}
