// Take positive integer input and tell if it is divisible by 5 and 3.
#include<iostream>
using namespace std;
int main ()
         {
          int num; 
          cout << "Enter a Number :- ";
          cin >> num;
          if (num%5 == 0 && num%3 == 0) { cout << num << " is Divisible by 3 & 5" << endl;}
          else { cout << num << " is Not Divisible by 3 & 5" << endl; }
          return 0;  
         }   
         