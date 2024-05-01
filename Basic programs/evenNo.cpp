#include <iostream> // headerfiles which contains definitions of predefined functions

using namespace std;
// namespace is similar to section, in different namespaces the implementions can differ ex - cout

int main()
{
   int n;
   cout<<"Enter the value of n:"<<endl;
   cin>>n;
   for (int i = 2; i < n; i++)
   {
     if(i%2==0){
        cout<<i<<" ";
     }
   }
   
   
    return 0; 
}



