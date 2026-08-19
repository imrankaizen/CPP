// Take input percentage of a student and print the Grade according to marks:
// i) 81-100 Very Good
// ii) 61-80 Good
// iii) 41-60 Average
// iv) <=40 Fail
#include<iostream>
using namespace std;
int main ()
         {
          int percentage;
          cout << "Enter Your Percentage :- ";
          cin >> percentage; 
          if(percentage > 80 && percentage <=100)
            { cout << percentage << " is Very Good"; }
          else if (percentage > 60 && percentage <= 80)
            { cout << percentage << " is Good"; }
          else if (percentage > 40 && percentage <= 60) 
            { cout << percentage << " is Average"; } 
          else { cout << percentage << " is Fail"; }  
          return 0;  
         }   