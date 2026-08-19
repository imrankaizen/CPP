// Take 3 numbers input and tell if they can be the sides of a triangle.
#include<iostream>
using namespace std;
int main ()
         {
          int a,b,c;
          cout << "Enter 3 Sides of a Traingle :- ";
          cin >> a >> b >> c;
          if ((a+b) > c && (a+c) > b && (b+c) > a) { cout <<a << ", " << b << ", " << c << " can be Side of a Traingle" << endl; }   
          else { cout <<a << ", " << b << ", " << c << " can't be Side of a Traingle" << endl; }
          return 0;  
         }   