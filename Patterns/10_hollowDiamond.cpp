#include <iostream> 

using namespace std;


// Hollow diamond
    //           *                           n-1 spaces   1 star
    //         *   *                         n-2 spaces   2 star
    //       *       *                       n-3 spaces   3 star        =>>>  n-row-1 space or n-(row+1)
    //     *           *                     n-4 spaces   4 star
    //   *               *                   0 spaces     5 stars or n stars
    //   *               *                   0 spaces     5 stars or n stars
    //     *           *                     n-1 spaces   4 stars           
    //       *       *                       n-2 spaces   3 stars        =>>>  spaces = row      stars = n-row stars
    //         *   *                         n-3 spaces   2 stars
    //           *                           n-4 spaces   1 star



int main()
{
    int n;
     cout<<"Enter the value of n"<<endl;
     cin>>n;
    
    for (int row = 0; row < n; row++) // print n rows 
    {
        // spaces 
        for (int col = 0; col < n-row-1; col++)
        {
            cout<<" ";
        }
        
       // stars
        for (int col = 0; col < 2*row+1; col++) 
           if(col==0 || col==2*row){
            cout<<"*";
           }
           else{
            cout<<" ";
           }
        
        cout<<endl;
        
    }

    for (int row = 0; row < n; row++) // print n rows 
    {
        // spaces
        for (int col = 0; col < row; col++) // print (row number +1) stars in each row
        {
            cout<<" "; 
        }

        // stars
        for (int col = 0; col < 2*n-2*row-1; col++)
        if(col==0 || col==2*n-2*row-2){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
        
        cout<<endl;
        
    }
    
    return 0; 
}