// #include<iostream>
// using namespace std;
// int main(){
//     int n=7;
//     int arr[7]={3,-4,5,4,-1,7,-8};
//     int currentsum=0;
//     int maxsum=0;
//     for(int i=0;i<n;i++){
//         currentsum+=arr[i];
//         maxsum=max(currentsum,maxsum);
//         if(currentsum<0){
//             currentsum=0;
//         }
//     }
//     cout<<"sum of the subarray of the array is : "<<maxsum<<endl;
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec={1,2,3,4,5};
    int currentsum=0;
    int maxsum=0;
    for(int val:vec){
        currentsum+=val;
        maxsum=max(currentsum,maxsum);
        if(currentsum<0){
            currentsum=0;
        }
    }
    cout<<maxsum<<endl;
    
}