#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int score;

public:
    Student(string n = "", int s = 0) : name(n), score(s) {}

    bool operator<(const Student& other) const {
        return score < other.score;
    }

    string getName() const { return name; }
    int getScore() const { return score; }
};

void selectionSort(Student arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            Student temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
}

int main() {
    const int SIZE = 5;
    Student students[SIZE] = {
        Student("Alice", 85),
        Student("Bob", 92),
        Student("Charlie", 78),
        Student("David", 95),
        Student("Eve", 88)
    };

    selectionSort(students, SIZE);

    cout << "Sorted students by score:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << students[i].getName() << ": " << students[i].getScore() << endl;
    }

    return 0;
}
