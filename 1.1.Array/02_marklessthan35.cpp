#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of students: ";
    cin>>n;
    int arr[n];
    cout<<"enter marks: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<35) cout<<i<<" ";
       
    }

}