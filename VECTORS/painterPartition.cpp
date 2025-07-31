#include<iostream>
#include<vector>
using namespace std;

bool ispossible(vector<int> &arr,int n,int m,int maxwork){
    int painter=1,time=0;
    for(int i=0;i<n;i++){
        if(time+arr[i]<=maxwork){
            time+=arr[i];
        }
        else{
            painter++;
            time=arr[i];
        }
    }
    return painter<=m;
}
int painterproblem(vector<int> &arr,int n,int m){
    if(m>n){
        return -1;
    }
    int sum=0;
    int maxval=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>maxval){
            maxval=arr[i];
        }
    }
    for(int i=0;i<n;i++){
         sum+=arr[i];
    }
    int start=maxval;
    int end=sum;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(ispossible(arr,n,m,mid)){
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
    int n=4,m=2;
    vector<int> arr={40,30,10,20};
    cout<<painterproblem(arr,n,m)<<endl;
    return 0;
}