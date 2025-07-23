#include<iostream>
#include<vector>
using namespace std;
int BinarySearch(vector<int>array,int target ){
    int n=array.size();
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+((end-start)/2);         // int mid=(start+end)/2;  changing this formula for the optimisation
        if(target>array[mid]){
            start=mid+1;
        }
        else if(target<array[mid]){
            end=mid-1;
        }
        else {
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> array1={-1,0,3,4,5,9,12};
    int target1=12;
    cout<<BinarySearch(array1,target1)<<endl;
    vector<int>array2={-1,0,3,5,9,12};
    int target2=0;
    cout<<BinarySearch(array2,target2);
    return 0;

}