#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(5);
    cout<<"Enter 5 elements: ";
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    
    for(int i=0;i<v.size();i++){//n-1 pass
        //traverse
        for(int j=0;j<v.size()-1;j++){ //swap
            if(v[j]>v[j+1])
            swap(v[j],v[j+1]);
        };
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}