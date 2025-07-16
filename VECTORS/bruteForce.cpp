// to find the maximum sum of subarray
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=7;
    int arr[7]={3,-4,5,4,-1,7,-8};
    int MaxSUm=arr[0];
    for(int st=0;st<n;st++){
        int currentSum=0;
        for(int end=st;end<n;end++){
            currentSum+=arr[end];
            MaxSUm=max(currentSum,MaxSUm);
        }
    }
    cout<<" Sum of the subarray with maximum sum: "<<MaxSUm<<endl;

    return 0;


}