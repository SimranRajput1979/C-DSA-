// memory is of two types static and dynamic allocation
// static memory is of compiletime like when we creat  vect it is empty during compile time  it cannot be changed   it is in a stack
// in dynamic pushback give it a value at the run time  it can be resize   it is in a heap

//MAXIMUM SUBARRAY SUM
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            for(int i=st;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}