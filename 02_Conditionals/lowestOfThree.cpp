// If the ages of Ram, Shyam and Ajay are input through the keyboard, 
// write a program to determine the youngest of the three.
#include<iostream>
using namespace std;
int main ()
         {
          int ramAge,shyamAge,ajayAge;
          cout << "Enter Age of RAM :- ";  cin >> ramAge; 
          cout << "Enter Age of SHYAM :- "; cin >> shyamAge;
          cout << "Enter Age of AJAY :- "; cin >> ajayAge;
          if(ramAge <= shyamAge && ramAge <= ajayAge)  
            { cout << "RAM is Youngest" << endl; }    
          else if(shyamAge <= ramAge && shyamAge <= ajayAge) 
            { cout << "SHYAM is Youngest" << endl; }
          else { cout << "AJAY is Youngest" << endl; }  
          return 0;  
         }    
            