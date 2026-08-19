//Find Number of Digit in a INTEGER
#include<iostream>
using namespace std;
int main()
        {
         int num,i;
         cout << "Enter a Number :- ";   
         cin >> num;
         for(i=0; num != 0; i++,num/=10);
         cout << i << " Digit Present";    
         return 0;
        }