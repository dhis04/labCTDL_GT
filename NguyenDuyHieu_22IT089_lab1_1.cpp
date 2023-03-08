#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void input(int *arr, int n) {
    srand(time(NULL));  
    
    for (int i = 0; i < n; i++) {
        *(arr + i) = rand() % 100; 
    }
}

void print(int *arr, int n) {
    cout << "[ ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << "]" << endl;
}

void remove(int *arr, int &n) {
    int e = 0; 
    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 == 0) {
            e++;
        }
    }
    
    int *new_arr = new int[e];  
    
    int j = 0;
    
    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 == 0) {
            *(new_arr + j) = *(arr + i);
            j++;
        }
    }
    
    delete[] arr;  
    
    arr = new_arr;  
    
    n = e;
}

int main() {
    int n = 10; 
    int *arr = new int[n]; 
    
    input(arr, n);
    cout << "Initial array: ";
    print(arr, n);
    
    remove(arr, n);
    cout << "Array after removing odd numbers: ";
    print(arr, n);
    
    delete[] arr;  
    return 0;
}
