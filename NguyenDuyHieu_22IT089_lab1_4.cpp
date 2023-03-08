#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int* createArray(int size) {
    int* arr = new int[size];
    return arr;
}

void fillArray(int* arr, int size) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100 + 1;
    }
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int* arr = createArray(size);
    fillArray(arr, size);
    cout << "The array is: ";
    printArray(arr, size);
    delete[] arr;
    return 0;
}
