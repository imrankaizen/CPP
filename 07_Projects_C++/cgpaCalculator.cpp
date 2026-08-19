#include<iostream>
#include<string.h>
using namespace std;

class cgpaCalculator {

    private:
        int m1,m2,m3,m4,m5,m6,roll,totalMarks;
        float percentage,cgpa;
        string name;

    public :
        void getMarks (void);
        void calculateMarks (void);
        void displayResult (void);

}student;

int main (void) {

    student.getMarks();
    student.calculateMarks();
    student.displayResult();

    return 0;
}
       
void cgpaCalculator :: getMarks (void){
    
    cout << endl<< endl<< endl<< endl<< endl<< endl<< endl;
    cout << "\t\t\t\t.............  Enter Your Details for Report Card ! ............." << endl << endl ;
    cout << "\t\t\t\tEnter Your Name = ";
    cin >> name; cout << endl;
    cout << "\t\t\t\tEnter Your Roll Number = ";
    cin >> roll; cout << endl << endl << endl; 
    cout << "\t\t\t\tEnter 1st subject Mark :- ";
    cin >> m1;  cout << endl;
    cout << "\t\t\t\tEnter 2nd subject Mark :- ";
    cin >> m2;  cout << endl;
    cout << "\t\t\t\tEnter 3rd subject Mark :- ";
    cin >> m3;  cout << endl;
    cout << "\t\t\t\tEnter 4th subject Mark :- ";
    cin >> m4;  cout << endl;
    cout << "\t\t\t\tEnter 5th subject Mark :- ";
    cin >> m5;  cout << endl;
    cout << "\t\t\t\tEnter 6th subject Mark :- ";
    cin >> m6;  cout << endl;

}

void cgpaCalculator :: calculateMarks (void) {

    totalMarks = m1+m2+m3+m4+m5+m6;
    percentage = (totalMarks/ 600.0)*100;
    cgpa = percentage/9.5;

}

void cgpaCalculator :: displayResult(void) {
   
    cout << endl << endl << endl;
    cout << "\t\t\t\t\t------------------x R E S U L T x------------------" << endl << endl << endl;
    cout << "\t\t\t\t\tName : " << name << endl<<endl;
    cout << "\t\t\t\t\tRoll no. : " << roll << endl << endl << endl;
    cout << "\t\t\t\t\t1st Subject : " << m1 << endl << endl;
    cout << "\t\t\t\t\t2nd Subject : " << m2 << endl << endl;
    cout << "\t\t\t\t\t3rd Subject : " << m3 << endl << endl;
    cout << "\t\t\t\t\t4th Subject : " << m4 << endl << endl;
    cout << "\t\t\t\t\t5th Subject : " << m5 << endl << endl;
    cout << "\t\t\t\t\t6th Subject : " << m6 << endl  << endl << endl;
    cout << "\t\t\t\t\tTotal Marks : " << totalMarks  << endl << endl << endl;
    cout << "\t\t\t\t\tPercentage : " << percentage << endl << endl<< endl;
    cout << "\t\t\t\t\tC G P A  : " << cgpa << endl<< endl; 
}