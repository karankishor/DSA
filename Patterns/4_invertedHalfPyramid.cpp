#include <iostream> 

using namespace std;

// Inverted half pyramid
// * * * * * 
// * * * *
// * * *
// * *  
// * 






int main()
{
    int n;
     cout<<"Enter the value of n"<<endl;
     cin>>n;
    
    for (int row = 0; row < n; row++) // print n rows 
    {
        // for (int col = row; col < n; col++) 
        for (int col = 0; col < (n-row); col++)     // print (n-row) index stars in each row
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    

   
    return 0; 
}