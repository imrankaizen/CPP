// Print the given Pattern According to ROWs & COLUMNs
//          1  
//          A  B
//          1  2  3
//          A  B  C  D
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
                  if(i%2 == 0){ cout << (char)(j+64) << " "; }  
                  else { cout << j << " "; }
                 } 
              cout << endl;
             }   
          return 0;  
         }