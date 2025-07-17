#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int>nums={1,2,2,2,2,2,2,3,4,5};
    int n=nums.size();
   
    for(int val:nums){
        int frequency =0;
        for(int element:nums){
            if(element==val){
                frequency++;
            }
        }
        if(frequency>n/2){
            cout<< val<<endl;
            return 0;
        }
    }

}

