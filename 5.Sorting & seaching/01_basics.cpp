#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(5);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());// TC= O(nlogn)
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    reverse(v.begin(),v.end());
    cout<<endl<<"reverse order \n";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}