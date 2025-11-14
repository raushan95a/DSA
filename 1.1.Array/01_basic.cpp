#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter value"<<endl;
    for(int i=0;i<n;i++){   //taking input
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){   //printing output
        cout<<"arr[i]= "<<arr[i];
        cout<<endl;
    }

}