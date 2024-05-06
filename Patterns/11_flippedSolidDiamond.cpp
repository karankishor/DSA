#include <iostream> 

using namespace std;


// Flipped Solid  diamond
// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
// *         *
// **       **
// ***     ***
// ****   ****
// ***** *****



int main()
{
    int n;
     cout<<"Enter the value of n"<<endl;
     cin>>n;
    
   

   for (int row = 0; row < n; row++) // print n rows 
    {
        // first half pyramid
        for (int col = 0; col < n-row; col++)
        {
            cout<<"*";
        }
        
       //  full pyramid
        for (int col = 0; col < 2*row+1; col++) 
            cout<<" ";
         
          // Second half pyramid
        for (int col = 0; col < n-row; col++)
        {
            cout<<"*";
        }
        
        cout<<endl;
        
    }
     for (int row = 0; row < n; row++) // print n rows 
    {
        // first half pyramid
        for (int col = 0; col < row+1; col++)
        {
            cout<<"*";
        }
        
       //  full pyramid
        for (int col = 0; col < 2*n-2*row-1; col++) 
            cout<<" ";
         
          // Second half pyramid
        for (int col = 0; col < row+1; col++)
        {
            cout<<"*";
        }
        
        cout<<endl;
        
    }
    
    return 0; 
}