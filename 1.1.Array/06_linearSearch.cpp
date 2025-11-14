#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int search;
    cout<<"enter the element you want to search: ";
    cin>>search;
    bool flag=false;
    //search
    for(int i=0;i<n;i++){
        if(arr[i]==search) flag=true;
    }
    if(flag==true)cout<<"the element is present";
    else cout<<"the given element is not found";
    
}