// Print the given Pattern According to ROWs & COLUMNs
//          A  B  C  D 
//          A  B  C  D 
//          A  B  C  D 
//          A  B  C  D 
#include<iostream>
using namespace std;
int main ()
         {
          int i,j,n;
          cout << "Enter Rows X Column :- ";
          cin >> n;
          for(i=65; i<n+65; i++)
             {
              for(j=65; j<n+65; j++)
                 { 
                  cout << (char)j << " ";  
                 } 
              cout << endl;       
             }
          return 0;  
         }