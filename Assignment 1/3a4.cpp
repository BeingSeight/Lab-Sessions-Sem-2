#include <iostream>
using namespace std;

class BinarySearch {
public:
    int search(int arr[], int size, int key) {
        if (size <= 0) {
            cout << "Error: Empty array" << endl;
            return -1;
        }

        if (!isSorted(arr, size)) {
            cout << "Error: Array must be sorted" << endl;
            return -1;
        }

        int left = 0;
        int right = size - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == key) {
                return mid;
            }

            if (arr[mid] < key) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return -1;  // Element not found
    }

private:
    bool isSorted(int arr[], int size) {
        for (int i = 1; i < size; i++) {
            if (arr[i] < arr[i - 1]) return false;
        }
        return true;
    }
};

int main() {
    BinarySearch bs;

    int arr[] = {1, 2, 3, 4, 5};
    int key = 3;

    int result = bs.search(arr, 5, key);

    if (result != -1) {
        cout << "Element " << key << " found at index: " << result << endl;
    } else {
        cout << "Element " << key << " not found" << endl;
    }

    return 0;
}
