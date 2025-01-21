#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;

    int* arr = new int[size];  // Allocate array dynamically

    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    double avg = double(sum) / size;

    cout << "Sum: " << sum << "\nAverage: " << avg << endl;

    delete[] arr;  // Deallocate memory
    return 0;
}
