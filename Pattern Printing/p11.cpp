// Print the given Pattern According to ROWs & COLUMNs
//          1  
//          1  3
//          1  3  5
//          1  3  5  7
#include<iostream>
using namespace std;
int main ()
         {
          int i,j,n,a;
          cout << "Enter Your Rows X Column :- ";
          cin >> n; 
          for(i=1; i<=n; i++)
             {
              a=1;  
              for(j=1; j<=i; j++)  
                 {
                  cout << a << " "; a+=2;
                 }   
              cout << endl;   
             }  
          return 0;  
         }
