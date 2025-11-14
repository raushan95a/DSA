#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int> v;
v.push_back(6);
v.push_back(16);
v.push_back(5);
v.push_back(9);
v.push_back(35);
v.push_back(6);
v.push_back(69);
v.push_back(91);
v.push_back(6);
v.push_back(16);
v.push_back(5);
v.push_back(9);
v.push_back(35);
v.push_back(6);
v.push_back(69);
v.push_back(91);
v.push_back(69);
v.push_back(91);
cout<<"the size is:"<<v.size()<<endl;
cout<<"the capacity is:"<<v.capacity()<<endl;

cout<<endl;
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
cout<<"the size is:"<<v.size()<<endl;
cout<<"the capacity is:"<<v.capacity()<<endl;

}