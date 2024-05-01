#include <iostream> // headerfiles which contains definitions of predefined functions

using namespace std;
// namespace is similar to section, in different namespaces the implementions can differ ex - cout

int main()
{
   int P,R,T;
   cin>>P>>R>>T;
   int SI = (P*R*T)/100;
   cout<<endl;
   cout<<"The Simple Interest : "<<SI;
   
    return 0; 
}


// Pseudo Code 

// 1. Read P, R<T
// 2. SI = (P*R*T)/100
// 3. print SI
