#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;
    if (rows <= 0 || cols <= 0) {
        cout << "Rows and columns must be positive.\n";
        return 0;
    }

    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++)
        matrix[i] = new int[cols];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }

    cout << "\nMatrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) cout << matrix[i][j] << '\t';
        cout << '\n';
    }

    for (int i = 0; i < rows; i++) delete[] matrix[i];
    delete[] matrix;
    matrix = nullptr;
    return 0;
}
