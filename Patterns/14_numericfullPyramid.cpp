#include <iostream> 

using namespace std;


// numberic full pyramid
//     1
//    232
//   34543
//  4567654
// 567898765



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

        // numbers
        for (int col = 0; col < row+1; col++)
        {
            cout<<row+col+1;
        }
        // reverse counting
        int start = 2*row;
        for (int col = 0; col < row; col++)
        {
            cout<<start;
            start--;// start = start-1;
        }

        
        cout<<endl;
        
    }
    

   
    return 0; 
}