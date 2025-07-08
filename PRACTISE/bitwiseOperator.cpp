// BITWISE OPERATORS
// BITWISE & => AND operator.. it give the answer in the binary form
// BITWISE | => OR operator..
// BITWISE ^ => XOR operator..if bits are same it gives the answer 0, if bits are different it gives the answer 1.
// BITWISE LEFT SHIFT OPERATOR => <<    n<<i i indicates that the binary number every digit shift to i number of times to the left
// BITWISE RIGHT SHIFT OPERATOR => >>    as same in case of the right shift operator if we have to shift the 2 spaces than we make for example:
// 10<<2 => using left shift operator
// binary number => 1010 =>  _ _ _ _ _ _ two slides made because we shift the 2 spaces than 101000after moving to the left side on the right side 2 spaces left so we fill it with the 0's at there places
//  formula for right shift => [a/2^b]
 

// Operator Precedence:
// 1. *,/,%,+,-,<,<=,>,>=,==,!=,&&,||,=.
#include<iostream>
using namespace std;
bool isPowerOfTwo(int n){
    
    return (n>0) && ((n & (n-1))==0);
}
int main(){
    int n;
    cin>>n;
    if(isPowerOfTwo(n)){
        cout<<"it is the power of 2"<<endl;
    }
    else{
        cout<<"it is not the power of 2"<<endl;
        }
        return 0;
   
}