#include<bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> &v1,vector<int> &v2){
    int n=v1.size() ,m=v2.size();
    vector<int> v(n+m);
    int i=0;  //v1
    int j=0;  //v2
    int k=0;  //v

    while(i<n && j<m){
        if(v1[i]<=v2[j]) {
            v[k]=v1[i];
            i++;
        }
        else {
            v[k]=v2[j];
            j++;
        }
        k++;
    }
    // for remaining elements
    while(j<=m-1){
        v[k++]=v2[j++];
    }

    while(i<=n-1){
        v[k++]=v1[i++];
    }
    
    return v;

}
int main(){
    vector<int> v1 = {1,4,5,8};
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<" ";
    vector<int> v2 = {2,3,6,8,10,12};
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    vector<int> v=merge(v1,v2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}