// Print the given Pattern According to ROWs & COLUMNs
//                  * 
//               *  *  *
//            *  *  *  *  *
//               *  *  *
//                  * 

#include<iostream>
using namespace std;
int main ()
         {
          int i,j,k,l,n;      
          cout << "Enter Number of Rows & Column :- ";
          cin >> n ;


          for(i=1; i<=n; i++)
             {

              for(j=n-1; j>=i; j--)
                  {
                   cout << "   "; 
                  }  

              for(k=1; k<=i; k++ )
                  {
                   cout << " * ";
                  }    
              
              
              for(l=1; l<=i; l++)
                 {
                  cout << " * ";   
                 }    

              cout << endl;    
             }

         for(i=1; i<=n; i++)
            {
             
             for(j=1; j<=i; j++)
                 {
                  cout << "   ";  
                 }   
              
             for(k=n-1; k>=i; k--)
                {
                 cout << " * ";   
                }    

             for(l=n-1; l>=i; l--)
                {
                 cout << " * ";   
                }    

             cout << endl;    
            }

         }
