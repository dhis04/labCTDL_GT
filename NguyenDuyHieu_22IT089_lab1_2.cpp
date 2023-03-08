#include <iostream>
#include <cstring>
using namespace std;

typedef struct Student
{
    char name[30];
    char class_name[10];
    float mMath;
    float mPhysical;
} Student;

void add_student(Student *arr, int &n) {
    cout << "Enter student name: ";
    cin >> (arr + n)->name;
    cout << "Enter student class: ";
    cin >> (arr + n)->class_name;
    cout << "Enter math score: ";
    cin >> (arr + n)->mMath;
    cout << "Enter physical score: ";
    cin >> (arr + n)->mPhysical;
    n++;
}

void search_by_name(Student *arr, int n, char *name) {
    for (int i = 0; i < n; i++) {
        if (strcmp((arr + i)->name, name) == 0) {
            cout << "Found student:" << endl;
            cout << "Name: " << (arr + i)->name << endl;
            cout << "Class: " << (arr + i)->class_name << endl;
            cout << "Math score: " << (arr + i)->mMath << endl;
            cout << "Physical score: " << (arr + i)->mPhysical << endl;
            return;
        }
    }
    cout << "Student not found!" << endl;
}

void edit_class_by_name(Student *arr, int n, char *name, char *new_class) {
    for (int i = 0; i < n; i++) {
        if (strcmp((arr + i)->name, name) == 0) {
            strcpy((arr + i)->class_name, new_class);
            cout << "Class updated!" << endl;
            return;
        }
    }
    cout << "Student not found!" << endl;
}

int main() {
    Student arr[100];
    int n = 0;
    int choice;
    char name[30];
    char new_class[10];

    while (1) {
        cout << endl << "Select an option:" << endl;
        cout << "1. Add a new student" << endl;
        cout << "2. Search a student by name" << endl;
        cout << "3. Edit class of a student" << endl;
       // cout << "4. Quit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                add_student(arr, n);
                break;
            case 2:
                cout << "Enter student name: ";
                cin >> name;
                search_by_name(arr, n, name);
                break;
            case 3:
                cout << "Enter student name: ";
                cin >> name;
                cout << "Enter new class: ";
                cin >> new_class;
                edit_class_by_name(arr, n, name, new_class);
                break;
            // case 4:
            //     return 0;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }
    }
}
