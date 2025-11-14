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
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<=arr[i]) max=arr[i];
    }
    int second_max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=max && second_max<arr[i]) second_max=arr[i];
    }

    cout<<"the maximum no. is:"<<max<<endl;
    cout<<"the 2nd maximum no. is:"<<second_max<<endl;


    //find 2nd max in single traversal
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            second_max=max;
            max=arr[i];
        }
        else if(second_max<arr[i]&& max!=arr[i])
            second_max=arr[i];
    }
    cout<<"the maximum no. is:"<<max<<endl;
    cout<<"the 2nd maximum no. is:"<<second_max;
}