#include <iostream>

using namespace std;

int main() {
    int arr[7] = {10, 11, 12, 13, 14, 15, 16};
    int key;

    cout << "Enter the element you want to search: ";
    cin >> key;

    // Linear search algorithm
    for (int i = 0; i < 7; i++) {
        if (arr[i] == key) {
            cout << "Yes" << endl;
            return 0; // Found the element, exit the loop
        }
    }

    cout << "No" << endl; // Key not found in the array

    return 0;
}
