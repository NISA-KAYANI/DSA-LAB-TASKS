#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Product {
    int productID;
    string productName;
    double price;
    int quantity;
};

int main() {
    Product product;
    cout << "Enter product ID: ";
    cin >> product.productID;
    cout << "Enter product name: ";
    getline(cin >> ws, product.productName);
    cout << "Enter price: ";
    cin >> product.price;
    cout << "Enter quantity: ";
    cin >> product.quantity;

    double totalPrice = product.price * product.quantity;
    cout << fixed << setprecision(2);
    cout << "\nProduct ID: " << product.productID
         << "\nProduct name: " << product.productName
         << "\nPrice: " << product.price
         << "\nQuantity: " << product.quantity
         << "\nTotal price: " << totalPrice << '\n';
    return 0;
}
