#include<iostream>
#include<vector>
using namespace std;


// if the number is prime or not
int primeNumber(int n){
    if(n<=1) return false;
    if(n==2)  return true;
    if(n%2==0)  return false;
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n=7;
    primeNumber(n);
    if(primeNumber(n)){
        cout<<"isprime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
}

//sum of the subarray in the target

vector<int> subarraySum(vector<int> &arr, int target) {
      int sum=0,i=0;
      for(int j=0;j<arr.size();j++){
          sum+=arr[j];
      while(sum>target && i<=j){
          sum-=arr[i];
          i++;
      }
      if(sum==target){
          return{i+1,j+1};
      }
      }
      return {-1};
    }

