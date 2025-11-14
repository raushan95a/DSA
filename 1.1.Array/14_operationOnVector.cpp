#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int> v;
v.push_back(6);
v.push_back(16);
v.push_back(5);
v.push_back(9);
v.push_back(3);
v.push_back(6);
v.push_back(6);
v.push_back(6);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

v.pop_back();
v.pop_back();
cout<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

}