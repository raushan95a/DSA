// reverse a part of an array without using any extra array
#include<bits/stdc++.h>
using namespace std;
 int display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
 }


 void rev_part(int i, int j, vector<int>& v){
    while(i<=j){
        swap(v[i],v[j]);
        i++;
        j--;
    }
    
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
int k;
cout<<"no. of step rotate:";
cin>>k;
// if(k>v.size())
// k=k%v.size();
rev_part(0,v.size()-k-1,v);
rev_part(v.size()-k,v.size()-1,v);
cout<<"array after final k rotation:";
rev_part(0,v.size()-1,v);
    display(v);
}