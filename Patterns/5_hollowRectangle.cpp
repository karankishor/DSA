#include <iostream> 

using namespace std;

// square 
// * * * * * 
// *       *
// *       *
// * * * * * 


int main()
{
    int n , m;
     cout<<"Enter the value of n and m"<<endl;
     cin>>n>>m;

    // print the entire first & last row

    for (int row = 0; row < n; row++)
    {
        if(row==0 || row== n-1){
            for (int col = 0; col < m; col++)
            {
                cout<<"* ";
            }

            
        } else{
            // print * for first and last col in a row
            cout<<"* ";
            for (int i = 0; i < m-2; i++)
            {
                cout<<"  "; // spaces in between............
            }
            cout<<"* ";
            
        }
        cout<<endl;
    }
    

    

   
    return 0; 
}