// WAP to find the highest factor of a number 'n' other than n itself
#include<iostream>
using namespace std;
int main ()
         {
          int i,n,temp=1;
          cout << "Enter a Number :- ";
          cin >> n;
          for(i=n/2; i>=1; i--)
             {
              if(n%i == 0) { temp = i; break; }  
             }   
          cout << "Highest Factor of " << n << " is " << temp;    
         }