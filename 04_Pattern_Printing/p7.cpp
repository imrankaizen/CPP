// Print the given Pattern According to ROWs & COLUMNs
//          1  
//          1  2
//          1  2  3 
//          1  2  3  4
#include<iostream>
using namespace std;
int main ()
         {
          int i,j,n;
          cout << "Enter Rows X Column :- ";
          cin >> n;
          for(i=1; i<=n; i++)
             {
              for(j=1; j<=i; j++)
                 {
                  cout << " * ";  
                 } 
              cout << endl;
             }   
          return 0;  
         }