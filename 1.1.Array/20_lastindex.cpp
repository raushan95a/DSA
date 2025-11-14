//find the last ocurance of x in the array.

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int x;
    vector<int> v;
    v.push_back(10);
    v.push_back(6);
    v.push_back(9);
    v.push_back(1);
    v.push_back(12);
    v.push_back(4);
    v.push_back(6);
    v.push_back(1);
    // cout<<v.size();
    cout<<"enter a number:";
    
    cin>>x;
    int idx=-1;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==x) idx=i;
    // }/
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            idx=i;
            break;
        }

    }
    cout<<idx;

}