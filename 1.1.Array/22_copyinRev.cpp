// copy the content of one array into another in reverse order
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
    vector<int> v1(v.size());
    for(int i=0;i<v.size();i++){
        v1[i]=v[n-1-i];
    }
    cout<<"array after reversal: ";
    display(v1);
}