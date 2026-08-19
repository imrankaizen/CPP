// Experiment 10: write a program to demonstrate the working of constructor with one example.
// Experiment 11: write a program to create a class demonstrating the use of destructor.
// Experiment 12: observe the differences between constructor and destructor and list all the important points related with constructor and destructor.
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor called! Object created " << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main(void) {
    Student s1("Imran", 18);
    s1.display();
    return 0;
}