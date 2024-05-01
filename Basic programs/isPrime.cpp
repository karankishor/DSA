#include <iostream> // headerfiles which contains definitions of predefined functions

using namespace std;
// namespace is similar to section, in different namespaces the implementions can differ ex - cout

int main()
{
    // Execution of a program is started from main() function in C++
    // std::cout<<"This is my First C++ program";

    int N;
    cout<<"Enter a number "<<endl;
    cin>>N;
    cout<<endl;
    int i=2;
   
    
    return 0; 
}



// #Pseudo code

// 1. Read N
// 2. Set i = 2
// 3. if i<N 
//     A if  N%i=0
//      print 'Not Prime'
//       Go to 5
//     B else i= i+1
//     C  go to 3
// 4. else Print "Prime"
// 5. END
