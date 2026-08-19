// Experiment 13: rayta program to to show the working of function overloading.
// Experiment 14: create a class with more than one constructor showing the working of constructor overloading.
// Experiment 15: list down the important points related with function overloading constructor overloading and what are there differences
#include <iostream>
using namespace std;

class Rayta {
public:

    int add(int a, int b) {
        return a + b;
    }


    int add(int a, int b, int c) {
        return a + b + c;
    }


    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Rayta r;

    cout << "Sum of 2 integers (5 + 10): " << r.add(5, 10) << endl;
    cout << "Sum of 3 integers (5 + 10 + 15): " << r.add(5, 10, 15) << endl;
    cout << "Sum of 2 doubles (2.5 + 3.5): " << r.add(2.5, 3.5) << endl;

    return 0;
}