// WAP to check if a number is Prime or not.
#include<iostream>
using namespace std; 
int main ()
         {
          int i,num,count=0;
          cout << "Enter a Number :- ";
          cin >> num;
          if(num <= 1) { cout << "Number is Nither PRIME Nor Composite"; return 0; }          
          for(i=2; i<num; i++)
             {
              if(num%i == 0) { count=1; break; }
             }
          (count==0) ? cout << num << " is PRIME" : cout << num << " is Composite" ;   
         }