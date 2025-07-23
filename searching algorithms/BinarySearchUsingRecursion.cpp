#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>array,int target,int start,int end){
    // int n=array.size();
    // int start=0;
    // int end=n-1;
    int mid=start+((end-start)/2);
    while(start<=end){
        if(target>array[mid]){
            return binarysearch(array,target,mid+1,end);
        }
        else if(target<array[mid]){
            return binarysearch(array,target,start,mid-1);
        }
        else{
            return mid;
        }
    }
    return -1;

}
int main(){
    vector<int> array={-1,0,3,5,9,12};
    int n=array.size();
    int start=0;
    int end=n-1;
    int target=0;
    cout<<binarysearch(array,target,start,end);

    return 0;
}