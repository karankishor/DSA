// Program to generate Pascal's Triangle

// Problem Statement: This problem has 3 variations. They are stated below:

// Variation 1: Given row number r and column number c. Print the element at position (r, c) in Pascal’s triangle.

// Variation 2: Given the row number n. Print the n-th row of Pascal’s triangle.

// Variation 3: Given the number of rows n. Print the first n rows of Pascal’s triangle.



// exact element .........

#include <iostream>
using namespace std;

int nCr(int n, int r){
    long long res = 1; 
    
    for(int i=0; i<r; i++){
        res = res * (n-i);
        res = res / (i+1);
    }
    return res;
}

int  pascalsTriangle(int r, int c){
    int element = nCr(r-1, c-1);
    return element;
}

int main() {
    
    int ans = pascalsTriangle(4,2);
    cout<<ans;

    
    return 0;
}

// Time Complexity: O(c), where c = given column number.
// Reason: We are running a loop for r times, where r is c-1.

// Space Complexity: O(1) as we are not using any extra space


// VARiant   2 
// PRINT ENTIRE LINE 

//      BRUTE FORCE FOR VAR 2
#include <iostream>
using namespace std;

int nCr(int n, int r){
    long long res = 1; 
    
    for(int i=0; i<r; i++){
        res = res * (n-i);
        res = res / (i+1);
    }
    return res;
}

void  pascalsTriangle(int n){
    for(int c=1; c<=n; c++ ){
        cout<<nCr(n-1, c-1)<<" ";
    }
    cout<<endl;
}

int main() {
    
    int n =5;
    pascalsTriangle(n);

    
    return 0;
}

Time Complexity: O(n*r), where n is the given row number, and r is the column index which can vary from 0 to n-1.
Reason: We are calculating the element for each column. Now, there are total n columns, and for each column, the calculation of the element takes O(r) time where r is the column index.

Space Complexity: O(1) as we are not using any extra space.



// OPTIMAL APPROACH

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void pascalsTriangle(int n){
    long long res = 1; 
    cout<<res<<" ";
    
    for(int i=1; i<n; i++){
        res = res * (n-i);
        res = res /i;
        cout<<res<<" ";
    }
   cout<<endl;
}


int main() {
    
    int n =5;
    pascalsTriangle(n);

    
    return 0;
}




// VARIANT 3 .....................
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r(numRows);
        for(int i=0; i<numRows; i++){
               r[i].resize(i+1);
               r[i][0]= r[i][i] =1;



            for(int j=1; j<i; j++){
                r[i][j] = r[i-1][j-1] + r[i-1][j];
            }
        }
        return r;
    }
};