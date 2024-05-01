#include <iostream> 

using namespace std;

// inverted numeric half pyramid

// 1 2 3 4 5
// 1 2 3 4
// 1 2 3 
// 1 2 
// 1


int main()
{
    int n;
     cout<<"Enter the value of n"<<endl;
     cin>>n;
    
    for (int row = 0; row < n; row++) // print n rows 
    {
        for (int col = 0; col < (n-row); col++) // print (n-row) index stars in each row
        {
            cout<<col+1<<" ";
        }
        cout<<endl;
        
    }
    

   
    return 0; 
}