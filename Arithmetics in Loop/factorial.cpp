//Print the factorial of a given number 'n'.
#include<iostream>
using namespace std;
int main ()
         {
          int num,i,fact=1;
          cout << "Enter a Number :- ";
          cin >> num;
          for(i=1; i<num; i++,fact*=i);
          cout << "factorial of " << num << " is " << fact;  
          return 0;  
         }