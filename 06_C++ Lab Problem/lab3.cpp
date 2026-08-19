// Experiment 7: Create a class to store the details of students eg, Roll, Name and course.
// Experiment 8: Create a function in the above class to get Data of students and store them in member variables
// Experiment 9: Add another function in the above created class to print the details of students in organized manner.

#include<iostream>
#include<string.h>
using namespace std;

class student {

    private :
        string name,course;
        int roll;

    public :
        void inputData ();
        void showData ();
}s;


int main (void) {

    s.inputData();
    s.showData();
    return 0;
}


void student :: inputData () {

    cout << "Enter Student name :- ";
    cin >> name;
    cout << "Enter Student Course :- ";
    cin >> course;
    cout << "Enter Student Roll no. :- ";
    cin >> roll;
}


void student :: showData () {

    cout << "Student name is " << name << endl;
    cout << "Student Course is " << course << endl;
    cout << "Student Roll Number is " << roll << endl;
}