#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <char> vectoria={'a','b','c','d','e'};
    cout<<"size of the vector: "<<vectoria.size()
    <<endl;
    
    for(char val:vectoria){
        cout<<val<<endl;
    }
    return 0;

}