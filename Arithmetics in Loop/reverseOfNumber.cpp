// W.A.P. to print reverse of a given number.
#include<iostream>
using namespace std;
int main()
        {
         int num,sum,rem; 
         num  = sum = rem = 0;
         cout << "Enter a Number :- ";
         cin >> num;
         while(num>0)
              {
               rem = num%10;
               sum = sum*10 + rem;
               num/=10;  
              }  
         cout << sum;     
         return 0;   
        }