#include <iostream> 

using namespace std;

// numeric half pyramid
// 1
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5


int main()
{
    int n;
     cout<<"Enter the value of n"<<endl;
     cin>>n;
    
    for (int row = 0; row < n; row++) // print n rows 
    {
        for (int col = 1; col <= row+1; col++) // print (row number +1) numbers in each row
        {
            cout<<col<<" ";
        }
        cout<<endl;
        
    }
    

   
    return 0; 
}