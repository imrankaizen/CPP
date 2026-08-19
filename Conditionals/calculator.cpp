// Write a program to create a calculator that performs basic arithmetic 
// operations (add, subtract, multiply and divide) using switch case
// The calculator should input two numbers and an operator from user.
#include<iostream>
using namespace std;
int main ()
         {
          int a,b;
          char operation;
          cout << "Enter First Number :- ";
          cin >> a;
          cout << "Enter Second Number :- ";
          cin >> b; 
          cout << "Enter Your Operations :- ";
          cin >> operation;
          switch(operation)
                {
                 case '+' : cout << "Addition : " << a << " + " << b << " = " << a+b << endl; break;
                 case '-' : cout << "Subtraction : " << a << " - " << b << " = " << a-b << endl; break;
                 case '*' : cout << "Multiplication : " << a << " * " << b << " = " << a*b << endl; break;
                 case '/' : cout << "Division : " << a << " / " << b << " = " << a/b << endl; break;
                 default : cout << "Invalid Input" << endl;
                }  
          return 0;  
         } 