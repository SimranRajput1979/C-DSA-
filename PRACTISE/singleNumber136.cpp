#include<iostream>
#include<vector>
using namespace std;
// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int ans=0;
//         for(int val:nums){
//             ans=ans^val;
//         }
//         return ans;
//     }
// };
int main(){
    vector<int> nums={4,1,2,1,2};
    int n=nums.size();
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^nums[i];
    }
    cout<<ans<<endl;  //output: 4
    return 0;

}