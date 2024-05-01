#include <iostream> // headerfiles which contains definitions of predefined functions

using namespace std;
// namespace is similar to section, in different namespaces the implementions can differ ex - cout

int main()
{
   int a,b,c;
   cout<<"Enter the value of a, b, c"<<endl;
   cin>>a>>b>>c;
   if (a>b)
   {
    if(a>c){
        cout<<"a is greatest";
    }else{
        cout<<"c is greatest";
    }
   }else{
        if(b>c){
            cout<<"b is greatest";
        }else{
            cout<<"c is greatest";
        }
   }
   
   
    return 0; 
}


// Pseudo Code 

// 1. Read a,b,c
// 2. if a>b
//        if a>c print a
//        else   print c 
// 3. else 
//        if b>c print b
//        else   print c
