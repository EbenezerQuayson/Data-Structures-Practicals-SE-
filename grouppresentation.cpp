#include <iostream>
using namespace std;

int main() {
    const int CAPACITY = 7;
    int arr[CAPACITY];
    int size = 5;   

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "\nInitial array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    if (size < CAPACITY) {
        for (int i = size; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = 3;
        size++;
    }

    cout << "\nAfter inserting 3 at index 0: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    if (size < CAPACITY) {
        arr[size] = 8;
        size++;
    }

    cout << "After inserting 8: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 2; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;

    cout << "\nAfter deleting element at index 2: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int searchValue = 6;
    int index = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] == searchValue) {
            index = i;
            break;
        }
    }

    cout << "\nLinear search result for value 6: " << index << endl;

    return 0;
}