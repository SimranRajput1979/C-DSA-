#include<iostream>
#include<vector>
using namespace std;
int main(){
    int product;
    vector<int>array={1,2,3,4};
    int n=array.size();
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
         product=array[j]*array[j+1];
    }
}
cout<<product<<" "<<endl;
    return 0;

}