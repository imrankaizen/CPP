// WAP to check if a number is composite or not.
#include<iostream>
using namespace std; 
int main ()
         {
          int i,num,count=0;
          cout << "Enter a Number :- ";
          cin >> num;
          if(num <= 1) { cout << "Number is Nither PRIME Nor Composite"; return 0; }
          for(i=1; i<=num; i++)
             {
              if(num%i == 0) { count++; }
             }
          (count>2) ? cout << num << " is Composite" : cout << num << " is PRIME"  ;   
         }
         