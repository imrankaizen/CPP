// Print the given Pattern According to ROWs & COLUMNs
//          *  *  *  *  
//          *  *  *
//          *  *  
//          *
#include<iostream>
using namespace std;
int main ()
         {
          int i,j,n;
          cout << "Enter Rows X Column :- ";
          cin >> n;
          for(i=n; i>=1; i--)
             {
              for(j=1; j<=i; j++)
                 {
                  cout << " * ";
                 } 
              cout << endl;
             }   
          return 0;  
         }