#include <iostream> 

using namespace std;

// half pyramid
// * 
// * * 
// * * * 
// * * * *
// * * * * * 


int main()
{
    int n;
     cout<<"Enter the value of n"<<endl;
     cin>>n;
    
    for (int row = 0; row < n; row++) // print n rows 
    {
        for (int col = 0; col < row+1; col++) // print (row number +1) stars in each row
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    

   
    return 0; 
}