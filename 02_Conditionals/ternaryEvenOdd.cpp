// Take positive integer input and tell if it is even or odd Using ternary Operator
#include<iostream>
using namespace std;
int main ()
         {
          int num;
          cout << "Enter a Number :- ";
          cin >> num;
          (num%2==0) ? cout << num << " is Even" : cout << num << " is Odd";   
          return 0;  
         }
         