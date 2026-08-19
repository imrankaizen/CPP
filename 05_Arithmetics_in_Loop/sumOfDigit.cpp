// Find Sum of Digit of a Number 
#include<iostream>
using namespace std;
int main ()
         {
          int num,sum,rem;
          num = sum = rem = 0;
          cout << "Enter a Number :- ";   
          cin >> num;
          while (num > 0)
                {
                 rem=num%10;
                 sum+=rem;
                 num/=10;   
                }  
          cout << sum << " is sum of Digit";  
          return 0;        
         }   
