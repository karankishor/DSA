#include <iostream> 

using namespace std;

// alpha palindrome pyramid
// A        
// ABA      
// ABCBA    
// ABCDCBA  
// ABCDEDCBA

int main()
{
    int n;
     cout<<"Enter the value of n"<<endl;
     cin>>n;
    int row;
    for ( row = 0; row < n; row++) // print n rows 
    {
        int col;
        for ( col = 0; col < row+1; col++)
        { 
            int ans = col+1;
            char ch = ans + 'A'-1;
            cout<<ch;
        }
        
        // reverse counting printing
        for (int col = row; col >=1; col--)
        {
            int ans = col;
            char ch = ans + 'A'-1;
            cout<<ch;
        }
        
        cout<<endl;
        
    }

    //  for (int row = 0; row < n; row++) // print n rows 
    // {
        
    //     for (int col = 0; col < n-row; col++)
    //     { 
    //         cout<<n-row;
    //         if(col != n-row-1){
    //             cout<<"*";
    //         }
    //     }
        
    //     cout<<endl;
        
    // }

   
    
    return 0; 
}