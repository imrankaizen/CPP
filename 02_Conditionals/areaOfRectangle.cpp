// Given the length and breadth of a rectangle, write a program to 
// find whether the area of the rectangle is greater than its perimeter.
#include<iostream>
using namespace std;
int main ()
         {
          int l,b,area,perimeter;
          cout << "Enter Length of Rectangle :- ";
          cin >> l;
          cout << "Enter Breadth of Rectangle :- ";
          cin >> b;
          area = l*b;
          perimeter = 2*(l+b);
          if(area > perimeter) { cout << "the area of the rectangle is greater than its perimeter" << endl; }
          else { cout << "the area of the rectangle is NOT greater than its perimeter" << endl; }
          return 0;  
         } 
         