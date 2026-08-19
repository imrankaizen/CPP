// Take positive integer input and tell if it is divisible by 5 or not.
#include<iostream>
using namespace std;
int main()
        {
         int num;
         cout << "Enter a Number :- ";
         cin >> num;
         if(num%5 == 0) { cout << num << " is Divisible by 5"; }
         else { cout << num << " is Not Divisible by 5"; }
         return 0;   
        }