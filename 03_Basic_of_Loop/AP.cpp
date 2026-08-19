// Display this AP - 1,3,5,7,9.. upto 'n' terms.
#include<iostream>
using namespace std; 
int main ()
         {
          int i,a,n;
          cout << "Enter. Number of terms :- ";
          cin >> n;
          a = 1;
          for(i=1; i<=n; i++)  
             {
              cout << a << " ";   
              a+=2;
             } 
          return 0;  
         }
         