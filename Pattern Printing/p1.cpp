// Print Rectangle Using Rows & Column 
#include<iostream>
using namespace std;
int main ()
         {
          int i,j,r,c;
          cout << "Enter no,. of Rows :- ";
          cin >> r;
          cout << "Enter no. Column :- ";
          cin >> c;
          for(i=1; i<=r; i++)
             {
              for(j=1; j<=c; j++)
                 {
                  cout << " * ";  
                 } 
              cout << endl;
             }   
          return 0;  
         }