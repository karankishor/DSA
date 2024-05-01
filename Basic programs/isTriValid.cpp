#include <iostream> // headerfiles which contains definitions of predefined functions

using namespace std;
// namespace is similar to section, in different namespaces the implementions can differ ex - cout

int main()
{
   int a,b,c;
   cout<<"Enter the sides of the triangle:"<<endl;
   cin>>a>>b>>c;
   if ((a+b)>c && (b+c)>a && (c+a)>b){

         cout<<"Valid triangle"<<endl;
   }
   else{
         cout<<"Invalid triangle"<<endl;
}
    return 0; 
}


// Pseudo Code 
// is triangle valid
// the sum of 2 sides of triangle must be greater than the third..........
//    i.e a+b > c,  b+c>a,  c+a>b
// 1. Read a,b,c
// 2. if ((a+b)>c && (b+c)>a && (c+a)>b)
        //  print Valid triangle
// 3. else
        // print invalid triangle
