#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    string first=v[0];
    string last=v[v.size()-1];
    string s="";
    for(int i=0;i<min(first.length(),last.length());i++){
        if(first[i]==last[i]){
            s+=first[i]; 
        }
        else break;

    }
    cout<<s;
}
