#include<bits/stdc++.h>
using namespace std;

void sortposneg(vector<int> &v){
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[j]>=0) j--;
        if(v[i]<0) i++;
        if(i>j) break;
        if(v[i]>=0 && v[j]<0){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
}

int main(){
    vector<int> v;
    v.push_back(8);
    v.push_back(-3);
    v.push_back(-6);
    v.push_back(2);
    v.push_back(-6);
    v.push_back(3);
    v.push_back(-9);
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // sort01M1(v);
    sortposneg(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }    
}

