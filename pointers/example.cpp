#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr=&a;
    int **ptr2=&ptr;
    cout<<*(ptr)<<endl;   //both these cout will give the same output pointer in the pointer;
    cout<<ptr2<<endl;
    return 0;

}