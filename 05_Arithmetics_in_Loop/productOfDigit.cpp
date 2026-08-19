// W.A.P. to print product of digits of a given number. (0 not Allowed)
#include<iostream>
using namespace std;
int main ()
         {
          int num,product=1,rem;  
          cout << "Enter a number :- ";
          cin >> num;
          while(num!=0)
               {
                rem = num%10;
                product *= rem;
                num/=10;
               } 
          cout << "product of Number is " << product;
          return 0;
         }