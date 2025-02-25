#include <iostream>
using namespace std;

void findSmallLarge(int arr[], int size, int &smallest, int &largest) {
    smallest = arr[0];
    largest = arr[0];
    
    for(int i = 1; i < size; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
}

int main() {
    int arr[] = {12, 5, 8, 19, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int smallest, largest;
    
    findSmallLarge(arr, size, smallest, largest);
    
    cout << "Smallest element: " << smallest << endl;
    cout << "Largest element: " << largest << endl;
    
    return 0;
}