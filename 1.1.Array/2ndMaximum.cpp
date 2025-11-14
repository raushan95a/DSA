#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;//minimum value is stored in max

    //search maximum element
    // for(int i=0;i<n;i++){
    //     if(max<arr[i]) max=arr[i];
    // }
    int smax=INT_MIN;
    //search 2nd max element
    // for(int i=0;i<n;i++){
    //     if(arr[i]!=max && smax<arr[i]) smax=arr[i];
    // }

    //finding in one pass
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            smax=max;
            max=arr[i];
        }
    }
    cout<<"the maximum element is: "<<max<<endl;
    cout<<"the second maximum element is: "<<smax;
}