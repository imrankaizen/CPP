// Print the given Pattern According to ROWs & COLUMNs
//          A  
//          A  B
//          A  B  C
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
                  cout << (char)(i+64) << " ";  
                 } 
              cout << endl;
             }   
          return 0;  
         }