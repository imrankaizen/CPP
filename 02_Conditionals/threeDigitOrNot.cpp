// Take positive integer input and tell if it is a three digit number or not.
#include<iostream>
using namespace std;
int main ()
         {
          int num;
          cout << "Enter a Positive Integer :- ";
          cin >> num;
          if(num >= 100 && num <= 999) { cout << num << " is Three Digit" << endl; }
          else { cout << num << " is not Three Digit" << endl; } 
          return 0;   
         }   
         