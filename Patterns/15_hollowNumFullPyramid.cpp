#include <iostream> 

using namespace std;


// hollow numberic full pyramid
//     1
//    1 2
//   1   3
//  1     4
// 1 2 3 4 5



int main()
{
    int n;
     cout<<"Enter the value of n"<<endl;
     cin>>n;
    
    for (int row = 0; row < n; row++) // print n rows 
    {
        for (int col = 0; col < n-row-1; col++)
        {
            cout<<" ";
        }
        

        // numbers with space in between
        int start = 1;
        for (int col = 0; col < 2*row+1; col++) // 2*row+1 elements in each row
        {
        //  first  or last row
        if (row==0 || row == n-1)
        {
             if (col%2 == 0)
        {
            // even 
            cout<<start;
            start++;
        }else{
            // odd
            cout<<" ";
        }
        }else{
            // first column

           if(col==0){
            cout<<1;    
           }else if(col== 2*row+1-1){
                cout<<row+1;
           }else{
            cout<<" ";
           }
        }
        
       

        
            
        }

       

        
        cout<<endl;
        
    }
    

   
    return 0; 
}