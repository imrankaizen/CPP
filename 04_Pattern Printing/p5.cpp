// Print the given Pattern According to ROWs & COLUMNs
//          A  A  A  A 
//          B  B  B  B 
//          C  C  C  C 
//          D  D  D  D 
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
                  cout << (char)i << " ";  
                 } 
              cout << endl;       
             }
          return 0;  
         }