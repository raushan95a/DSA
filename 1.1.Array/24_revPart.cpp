// reverse a part of an array without using any extra array
#include<bits/stdc++.h>
using namespace std;
 int display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
 }
void reverse(vector<int> & v){
    int i=0;
    int j=v.size()-1;
    while(i<=j){
        swap(v[i],v[j]);
        i++;
        j--;
    }
}

 void rev_part(int i, int j, vector<int>& v){
    while(i<=j){
        swap(v[i],v[j]);
        i++;
        j--;
    }
    display(v);
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
    rev_part(1,4,v);
    // reverse(v);
    
}