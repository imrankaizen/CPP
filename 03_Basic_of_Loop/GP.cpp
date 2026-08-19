// Display this GP - 1,2,4,8,16,32,.. upto 'n' terms.
#include<iostream>
using namespace std;
int main ()
         {
          int i,n,temp;
          cout << "Enter Number of term :- ";
          cin >> n;
          temp = 1;
          for(i=1; i<=n; i++,temp*=2)
             {
              cout << temp << " ";   
             }
          return 0;  
         }
         