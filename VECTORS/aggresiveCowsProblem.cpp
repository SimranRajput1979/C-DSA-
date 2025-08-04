#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool ispossible(vector<int>&arr,int n,int c,int minallowed){
    int cows=1, lastPosition=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-lastPosition>=minallowed){
            cows++;
            lastPosition=arr[i];
        }
       if(cows==c){
        return true;
       }
    }
    return false;
    
}
int aggresiveCows(vector<int> &arr,int n,int c){
    sort(arr.begin(),arr.end());
  int start=1,end=arr[n-1]-arr[0];
  int ans=-1;
  while(start<=end){
    int mid=start+(end-start)/2;
    if(ispossible(arr,n,c,mid)){
        ans=mid;
        start=mid+1;
    }
    else{
        end=mid-1;
    }
  }
  return ans;
}
int main(){
    int n=5,c=3;
    vector<int> arr={1,2,8,4,9};
    cout<<aggresiveCows(arr,n,c)<<endl;
    return 0;

}

