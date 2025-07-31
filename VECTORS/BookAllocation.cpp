#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isValid(vector<int> &arr,int n,int m,int maxallocatebooks){
    int students=1,pages=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxallocatebooks){
            return false;
        }
        if(pages+arr[i]<=maxallocatebooks){
            pages+=arr[i];
        }
        else{
            students++;
            pages=arr[i];
        }
    }
    return students>m?false:true;
}
int allocationOfBook(vector<int> &arr,int n,int m){
    if(m>n){
        return -1;
    }
     int sum=0;
    //  int maxVal = arr[0];  // manually find max
    //  for(int i = 0; i < n; i++) {
    //      if(arr[i] > maxVal) {
    //          maxVal = arr[i];
    //      }
    //  }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int ans=-1;
    // int start=maxVal;     //if we do not want to start from 0 we can use this method by assigning the max value in the array
    int start=0;
    int end=sum;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(isValid(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr={2,1,3,4};
    int n=4,m=2;
    cout<<allocationOfBook(arr,n,m)<<endl;
    return 0;
    } 
