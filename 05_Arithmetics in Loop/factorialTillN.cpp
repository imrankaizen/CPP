#include<iostream>
using namespace std;
int main()
        {
         int fact=1,n,i,j;  
         cout << "Enter a Number :- ";
         cin >> n;
         for(j=1; j<=n; j++,fact=1) 
            {    
             for(i=1; i<j; i++,fact*=i); 
             cout << "Factorial of " << j << " is " << fact << endl;
            }
         return 0;   
        }