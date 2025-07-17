#include<iostream>
#include<vector>
using namespace std;
vector<int> Pairsum(vector<int> nums,int target){
    vector<int> ans;
    int n=nums.size();
    int i=0;
    int j=n-1;
    while(i<j){
        int Presentsum=nums[i]+nums[j];
        if(Presentsum<target){
            i++;
        }
        else if(Presentsum>target){
            j--;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

}
int main(){
    vector<int> nums={1,2,3,4,5};
    int target=9;
    vector<int>ans=Pairsum(nums,target);
    cout<<ans[0]<<", "<<ans[1]<<endl;

    return 0;
    

}
