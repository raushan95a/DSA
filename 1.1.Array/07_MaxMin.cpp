#include<iostream>
#include<climits>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;//max=arr[0]  (minimum value is stored in max)
    
    //search maximum element
    for(int i=0;i<n;i++){ 
        if(max<arr[i]) max=arr[i];
    }
    int mini=INT_MAX;// INT_MAX
    //search minimum element
    for(int i=0;i<n;i++){
        if(mini>arr[i]) mini=arr[i];
    }
    cout<<"the maximum element is: "<<max<<endl;
    cout<<"the minimum element is: "<<mini<<endl;

    for(int i=0;i<n;i++){
        min(arr[i],mini);
    }
    cout<<"the minimum element is: "<<mini;
}