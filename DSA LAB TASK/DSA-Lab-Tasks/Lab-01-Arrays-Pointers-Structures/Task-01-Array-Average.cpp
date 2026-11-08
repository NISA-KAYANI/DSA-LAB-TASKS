#include <iostream>
using namespace std;

int main() {
    int numbers[5], sum = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
        sum += numbers[i];
    }
    double average = static_cast<double>(sum) / 5;
    cout << "Sum = " << sum << "\nAverage = " << average << '\n';
    return 0;
}
