//with the optimised approach
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void bubblesort(vector<int>&arr,int n){
    for(int i=0;i<n-1;i++){
        bool isSwap=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        if(!isSwap){
            return ;
        }
    }
}
void PrintArray(vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n=5;
    vector<int>arr={4,1,3,2,5};
    bubblesort(arr,n);
    PrintArray(arr,n);
    return 0;

}