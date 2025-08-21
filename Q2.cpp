//) Design the logic to remove the duplicate elements from an Array and after the deletion the array should containtheunique elements.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Logic to remove duplicates
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                // shift elements left
                for (int k = j; k < n - 1; k++)
                    arr[k] = arr[k + 1];
                n--;   // reduce size
                j--;   // check the new element at same position
            }
        }
    }

    // Display unique elements
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
