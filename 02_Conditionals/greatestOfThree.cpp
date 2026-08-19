// Take 3 positive integers input and print the greatest of them.
#include<iostream>
using namespace std;
int main ()
         {
          int a,b,c;
          cout << "Enter 3 Number :- ";
          cin >> a >> b >> c;
          if(a >= b && a >= c) { cout << a << " is the Greatest" << endl; }
          else if(b >= c && b >= a ) { cout << b << " is the Greatest" << endl; } 
          else { cout << c << " is the Greatest"; } 
          return 0;  
         }   
         