#include <iostream>
#include <climits> // For INT_MIN and INT_MAX
using namespace std;

void findLargestAndSmallest(int arr[], int n) {
    if (n <= 0) {
        cout << "Array is empty or invalid size." << endl;
        return;
    }

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Smallest number: " << smallest << endl;
    cout << "Largest number: " << largest << endl;
}

int main() {
    int arr[] = {12, 3, 5, 7, -2, 15, 30, -5, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    findLargestAndSmallest(arr, n);

    return 0;
}