//Write a program to find sum of every row and every column in a two-dimensional array. 
#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input matrix dimensions
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int arr[20][20];

    // Input elements
    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Display matrix
    cout << "\nMatrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Row sums
    cout << "\nRow sums:\n";
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
        cout << "Row " << i + 1 << ": " << sum << endl;
    }

    // Column sums
    cout << "\nColumn sums:\n";
    for (int j = 0; j < cols; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            sum += arr[i][j];
        }
        cout << "Column " << j + 1 << ": " << sum << endl;
    }

    return 0;
}
