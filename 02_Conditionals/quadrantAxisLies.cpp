// Given a point (x, y), write a program to find out if it lies in 
// the Ist Quadrant, 2nd Quadrant, 3rd Quadrant, 4th Quadrant, on the 
// x-axis, y-axis or at the origin, viz. (0, 0).
#include<iostream>
using namespace std;
int main ()
         {
          int x,y;
          cout << "Enter First Point (x) :- "; cin >> x;
          cout << "Enter Second Point (y) :- "; cin >> y;
          if (x==0 && y==0) { cout << "It Lies at the Origin" << endl; }  
          else if (x==0) { cout << "It Lies at the Y-axis" << endl; } 
          else if (y==0) { cout << "It Lies at the X-axis" << endl; } 
          else if (x>0 && y>0) { cout << "It Lies at the First Quadrant" << endl; } 
          else if (x<0 && y>0) { cout << "It Lies at the Second Quadrant" << endl; } 
          else if (x<0 && y<0) { cout << "It Lies at the Third Quadrant" << endl; } 
          else if (x>0 && y<0) { cout << "It Lies at the Fourth Quadrant" << endl; } 
          return 0;  
         }   