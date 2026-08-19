// Display this AP - 4,7,10,13,16. upto 'n' terms. Using Formula 
#include<iostream>
using namespace std;
int main ()
         {
          int i,n;
          cout << "Enter nth Term :- ";  
          cin >> n;
          for(i=4; i<=(3*n)-1 ; i+=3)
             {
              cout << i << " ";   
             } 
          return 0;
         }
         