// reverse an array without using any extra array
#include<bits/stdc++.h>
using namespace std;
 int display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
 }

int main(){
    
    vector<int> v;
    
    int n;
    cout<<"enter array size:";
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    cout<<"original array: ";
    display(v);
    //reverse
    // int i=0, j=v.size()-1;
    // while(i<=j){
    //     swap(v[i],v[j]);
    //     i++;
    //     j--;
    // }
    for(int i=0,j=v.size()-1;i<=j;i++,j--){
        swap(v[i],v[j]);
    }
    cout<<"array after reversal: ";
    display(v);
}