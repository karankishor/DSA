#include <iostream> 

using namespace std;

// square 
// * * * * * 
// * * * * *
// * * * * * 
// * * * * * 
// * * * * * 


int main()
{
    int n;
     cout<<"Enter the value of n"<<endl;
     cin>>n;
    
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    

   
    return 0; 
}