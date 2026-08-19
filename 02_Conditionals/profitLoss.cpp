// If cost price and selling price of an item is input through 
// the keyboard, write a program to determine whether the seller
// has made profit or incurred loss or no profit no loss. Also 
// determine how much profit he made or loss he incurred.
#include<iostream>
using namespace std;
int main ()
         {
          int cp,sp;
          cout << "Enter Cost Price of Item :- ";
          cin >> cp;
          cout << "Enter Selling Price of Item :- ";
          cin >> sp;
          if(cp<sp) { cout << "Seller has made Profit of " << sp-cp << endl; }
          else if (cp>sp) { cout << "Seller has made Loss of " << cp-sp << endl; }
          else { cout << "Seller has made No Loss & No Profit" << endl; }
          return 0;  
         }   
        