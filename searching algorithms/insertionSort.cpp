#include<iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int> &arr,int n){
    for(int i=1;i<n;i++){
        int currentindex=arr[i];
        int previous=i-1;
        while(previous>=0 && arr[previous]>currentindex){
            arr[previous+1]=arr[previous];
            previous--;
        }
        arr[previous+1]=currentindex;
    }
}
void printArray(vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n=5;
    vector<int>arr={4,1,5,2,3};
    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}