#include <iostream>
using namespace std;

void leftRotate(int arr[], int size, int positions) {
    if (size == 0 || positions == 0) return; // Handle edge cases
    positions = positions % size;  // Normalize positions

    int temp[positions]; // Temporary array to hold rotated elements
    for (int i = 0; i < positions; i++) {
        temp[i] = arr[i]; // Copy elements
    }

    for (int i = positions; i < size; i++) {
        arr[i - positions] = arr[i]; // Shift elements
    }

    for (int i = 0; i < positions; i++) {
        arr[size - positions + i] = temp[i]; // Copy rotated elements
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    cout << "Original: ";
    printArray(arr, size);

    leftRotate(arr, size, 2);
    cout << "Left rotate by 2: ";
    printArray(arr, size);

    return 0;
}
