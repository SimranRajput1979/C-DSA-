// VECTORE FUNCTIONS
/*
SIZE    //tell the size of the array
PUSH_BACK    //add the element in the last 
POP_BACK    // delete the last element in the list
FRONT       //try to print the element in the first
BACK        //give the last value
AT          //treat it like a index vect.at(0)in brackets these are index..
RESIZE
CLEAR
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char> vect={'a','b','c','d','e'};
    vect.push_back('p');
    vect.pop_back();
    cout<<vect.front()<<endl;
    cout<<vect.back()<<endl;
    for(char val:vect){
        cout<<val<<endl;
    }
    cout<<vect.size()<<endl;
    cout<<vect.at(0)<<endl;
}