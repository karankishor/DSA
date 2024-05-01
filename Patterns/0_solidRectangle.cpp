#include <iostream> 

using namespace std;

// solid rectangle
// ***************
// ***************
// ***************
// ***************
// ***************


int main()
{
    int n , m;
     cout<<"Enter the value of n and m "<<endl;
     cin>>n>>m;
    
   for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    

   
    return 0; 
}