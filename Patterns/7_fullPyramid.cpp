#include <iostream> 

using namespace std;


// full pyramid
    //           *                           n-1 spaces   1 star
    //         *   *                         n-2 spaces   2 star
    //       *   *   *                       n-3 spaces   3 star        =>>>  n-row-1 space or n-(row+1)
    //     *   *   *   *                     n-4 spaces   4 star
    //   *   *   *   *   *                 



int main()
{
    int n;
     cout<<"Enter the value of n"<<endl;
     cin>>n;
    
    for (int row = 0; row < n; row++) // print n rows 
    {
        // space
        for (int col = 0; col < n- row-1; col++) //  n-row-1 space or n-(row+1)
        {
            cout<<" "; 
        }

        // stars
        for (int col = 0; col < row+1; col++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
        
    }
    

   
    return 0; 
}