#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void selectionSort(vector<int>&arr,int n){
    for(int i=0;i<n-1;i++){
        int smallestindex=i;    //unsorted part starting
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestindex]){
                smallestindex=j;
            }
        }
        swap(arr[i],arr[smallestindex]);
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
    vector<int>arr={4,1,3,5,2};
    selectionSort(arr,n);
    printArray(arr,n);
    return 0;
}