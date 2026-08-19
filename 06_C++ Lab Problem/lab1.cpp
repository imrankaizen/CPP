// Experiment 1: A program to understand Cin or Cout in C++.
// Experiment 2: A program to demonstrate concept of OOPS
// Experiment 3: A program to input 2 numbers and print table of all that numbers in range

#include<iostream>
using namespace std;

class rangeTable {

    private :
        int x,y;

    public :
        void takeInput();
        void displayTable();

}rt;

int main (void) {

    rt.takeInput();
    rt.displayTable();
    return 0;
}


void rangeTable :: takeInput() {

        cout << "Enter Starting Point of the Table :- ";
        cin >> x;
        cout << "Enter Ending Point of the Table :- ";
        cin >> y;

} 

void rangeTable :: displayTable () {
        
        int i,j;
        cout << "Table From "<< x << " to " << y << endl << endl;
        for(i = x; i <= y; i++) {
            for(j=1; j <= 10; j++){

                cout << i << " * " << j << " = " << i*j << endl;
            }
            cout << endl;
        }
}