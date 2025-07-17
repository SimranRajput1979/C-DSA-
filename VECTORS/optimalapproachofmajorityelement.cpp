#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> nums={1,2,3,4,5,2,3,3,3,3,3,3,3,3,3,3,4,5,2,3,3,2,2,4,5};
    int ans=nums[0];
    int n=nums.size();
    int frequency=1;
    sort(nums.begin(),nums.end());
    for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]){
            frequency++;
        }
        else{
            frequency=1;
            ans=nums[i];
        }
        if(frequency>n/2){
            cout<< "the majority element is : "<<ans<<endl;
            return 0;
        }
    }
    cout<<"no majority element is found in the aarray.."<<endl;

}