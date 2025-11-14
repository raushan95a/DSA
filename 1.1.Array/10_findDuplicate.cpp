#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //to find duplicate element
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]=arr[j])
            flag=true;
            break;
        }
    }
    if(flag==true) cout<<"duplicate is found";
    else cout<<"duplicate is not found";
}
