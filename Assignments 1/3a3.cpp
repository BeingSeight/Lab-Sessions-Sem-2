#include <iostream>
using namespace std;

template<typename T>
int linearSearch(T arr[], int size, T key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1; // Return -1 if key not found
}

int main() {
    int intArr[] = {5, 2, 8, 1, 9};
    int intKey = 8;
    int intResult = linearSearch(intArr, 5, intKey);
    cout << "Integer " << intKey << " found at: " << intResult << endl;

    double doubleArr[] = {1.5, 2.3, 5.7, 8.9};
    double doubleKey = 5.7;
    int doubleResult = linearSearch(doubleArr, 4, doubleKey);
    cout << "Double " << doubleKey << " found at: " << doubleResult << endl;

    char charArr[] = {'a', 'b', 'c', 'd'};
    char charKey = 'c';
    int charResult = linearSearch(charArr, 4, charKey);
    cout << "Char " << charKey << " found at: " << charResult << endl;

    return 0;
}
