#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int> v;//no need to mention size
//inserting or input do not use[]
v.push_back(6);
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
v.push_back(1);
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
v.push_back(9);
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
v.push_back(10);
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;

//if u want to update or access
v[1]=15;
cout<<v[0]<<" ";
cout<<v[1]<<" ";
cout<<v[2]<<" ";
cout<<v[3]<<" ";
}