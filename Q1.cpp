//Develop a Menu driven program to demostrate the following operations of Arrays
//1.CREATE
//2.DISPLAY
//3.INSERT
//4.DELETE
//5.LINEAR SEARCH
//6.EXIT

#include <iostream>
using namespace std;

class ArrayOperations {
    int arr[100];   // fixed size array
    int n;          // current size

public:
    ArrayOperations() { n = 0; }

    // 1. CREATE
    void create() {
        cout << "\nEnter number of elements: ";
        cin >> n;

        if (n > 100) {
            cout << "Maximum allowed size is 100. Try again.\n";
            n = 0;
            return;
        }

        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << "Array created successfully.\n";
    }

    // 2. DISPLAY
    void display() {
        if (n == 0) {
            cout << "\nArray is empty!\n";
            return;
        }

        cout << "\nCurrent Array: ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    // 3. INSERT
    void insert() {
        if (n == 100) {
            cout << "\nArray is full! Cannot insert.\n";
            return;
        }

        int pos, value;
        cout << "\nEnter position to insert (1 to " << n+1 << "): ";
        cin >> pos;

        if (pos < 1 || pos > n+1) {
            cout << "Invalid position!\n";
            return;
        }

        cout << "Enter value to insert: ";
        cin >> value;

        for (int i = n; i >= pos; i--)
            arr[i] = arr[i - 1];

        arr[pos - 1] = value;
        n++;

        cout << "Element inserted successfully.\n";
    }

    // 4. DELETE
    void remove() {
        if (n == 0) {
            cout << "\nArray is empty! Nothing to delete.\n";
            return;
        }

        int pos;
        cout << "\nEnter position to delete (1 to " << n << "): ";
        cin >> pos;

        if (pos < 1 || pos > n) {
            cout << "Invalid position!\n";
            return;
        }

        cout << "Deleted element: " << arr[pos - 1] << endl;

        for (int i = pos - 1; i < n - 1; i++)
            arr[i] = arr[i + 1];

        n--;
    }

    // 5. LINEAR SEARCH
    void linearSearch() {
        if (n == 0) {
            cout << "\nArray is empty! Cannot search.\n";
            return;
        }

        int key;
        cout << "\nEnter element to search: ";
        cin >> key;

        for (int i = 0; i < n; i++) {
            if (arr[i] == key) {
                cout << "Element found at position " << i + 1 << ".\n";
                return;
            }
        }

        cout << "Element not found in array.\n";
    }
};

int main() {
    ArrayOperations obj;
    int choice;

    while (true) {
        cout << "\n====== ARRAY OPERATIONS MENU ======\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: obj.create(); break;
            case 2: obj.display(); break;
            case 3: obj.insert(); break;
            case 4: obj.remove(); break;
            case 5: obj.linearSearch(); break;
            case 6: cout << "Exiting program. Goodbye!\n"; return 0;
            default: cout << "Invalid choice! Please try again.\n";
        }
    }
}
