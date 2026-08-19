#include<iostream>
using namespace std;
int main()
        {
         float p,r,t,si;
         cout << "Enter Principle Amount = ";
         cin >> p;
         cout << "Enter Rate of Intrest = ";
         cin >> r;
         cout << "Enter Time Period = ";
         cin >> t;
         si = (p*r*t)/100;
         cout << "Simple Intrest  = " << si;
         return 0;   
        }
        