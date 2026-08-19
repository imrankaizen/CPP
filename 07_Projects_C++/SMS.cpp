#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string Roll_no, name, Class, Course, mobile_no, admission_year;

public:
    void setData(string r, string n, string c, string co, string m, string a) {
        Roll_no = r;
        name = n;
        Class = c;
        Course = co;
        mobile_no = m;
        admission_year = a;
    }

    void Display_Data(int i) {
        cout << "\nData Of Student " << i + 1 << ":\n";
        cout << "Roll No: " << Roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Class: " << Class << endl;
        cout << "Course: " << Course << endl;
        cout << "Mobile No: " << mobile_no << endl;
        cout << "Admission Year: " << admission_year << endl;
    }

    string get_RollNo() {
        return Roll_no;
    }

    void UpdateData() {
        cout << "\nEnter New Data:\n";
        cout << "Enter Roll No: "; cin >> Roll_no;
        cout << "Enter Name: "; cin >> name;
        cout << "Enter Class: "; cin >> Class;
        cout << "Enter Course: "; cin >> Course;
        cout << "Enter Mobile No: "; cin >> mobile_no;
        cout << "Enter Admission Year: "; cin >> admission_year;
    }
};

class StudentManagement {
private:
    Student students[30];
    int total;

public:
    StudentManagement() {
        total = 0;
    }

    void Enter() {
        int ch;
        cout << "Enter number of students to add: ";
        cin >> ch;

        for (int i = total; i < total + ch; i++) {
            string r, n, c, co, m, a;
            cout << "\nEnter data for student " << i + 1 << ":\n";
            cout << "Roll No: "; cin >> r;
            cout << "Name: "; cin >> n;
            cout << "Class: "; cin >> c;
            cout << "Course: "; cin >> co;
            cout << "Mobile No: "; cin >> m;
            cout << "Admission Year: "; cin >> a;
            students[i].setData(r, n, c, co, m, a);
        }
        total += ch;
    }

    void show() {
        if (total == 0) {
            cout << "No data is available.\n";
            return;
        }
        for (int i = 0; i < total; i++) {
            students[i].Display_Data(i);
        }
    }

    void search() {
        if (total == 0) {
            cout << "No data is available.\n";
            return;
        }
        string roll;
        cout << "Enter the Roll No of the student to search: ";
        cin >> roll;

        for (int i = 0; i < total; i++) {
            if (roll == students[i].get_RollNo()) {
                cout << "\nStudent Found:\n";
                students[i].Display_Data(i);
                return;
            }
        }
        cout << "Student with Roll No " << roll << " not found.\n";
    }

    void Update() {
        if (total == 0) {
            cout << "No data is available.\n";
            return;
        }
        string roll;
        cout << "Enter the Roll No of the student to update: ";
        cin >> roll;

        for (int i = 0; i < total; i++) {
            if (roll == students[i].get_RollNo()) {
                cout << "\nPrevious Data:\n";
                students[i].Display_Data(i);
                students[i].UpdateData();
                cout << "Record updated successfully.\n";
                return;
            }
        }
        cout << "Student with Roll No " << roll << " not found.\n";
    }

    void Delete() {
        if (total == 0) {
            cout << "No data is available.\n";
            return;
        }
        int choice;
        cout << "Are you sure you want to delete data?\n";
        cout << "Press '1' to delete all records: ";
        cin >> choice;

        if (choice == 1) {
            total = 0;
            cout << "All records have been deleted.\n";
        } else {
            cout << "Delete cancelled.\n";
        }
    }
};

int main() {
    StudentManagement sm;
    int value;

    while (true) {
        cout << "\n====== Student Management System ======\n";
        cout << "1. Enter Data\n";
        cout << "2. Show Data\n";
        cout << "3. Search Data\n";
        cout << "4. Update Data\n";
        cout << "5. Delete Data\n";
        cout << "6. Quit\n";
        cout << "Enter your choice: ";
        cin >> value;

        switch (value) {
            case 1: sm.Enter(); break;
            case 2: sm.show(); break;
            case 3: sm.search(); break;
            case 4: sm.Update(); break;
            case 5: sm.Delete(); break;
            case 6: exit(0);
            default: cout << "Invalid input. Please try again.\n";
        }
    }

    return 0;
}