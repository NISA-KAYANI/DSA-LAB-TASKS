#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Product {
    string name;
    int code;
    double price;
};

int main() {
    int n;
    cout << "How many products? ";
    cin >> n;
    if (n <= 0) {
        cout << "Number of products must be positive.\n";
        return 0;
    }

    Product* products = new Product[n];
    for (int i = 0; i < n; i++) {
        cout << "\nProduct " << i + 1 << '\n';
        cout << "Name: ";
        getline(cin >> ws, products[i].name);
        cout << "Code: ";
        cin >> products[i].code;
        cout << "Price: ";
        cin >> products[i].price;
    }

    cout << fixed << setprecision(2) << "\n--- Product List ---\n";
    for (int i = 0; i < n; i++)
        cout << products[i].name << " | Code: " << products[i].code
             << " | Price: " << products[i].price << '\n';

    delete[] products;
    products = nullptr;
    return 0;
}
