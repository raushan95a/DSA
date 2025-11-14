#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int> v;// size=0 

for(int i=0;i<5;i++){//v.size() yaha pr nhi likh skte hai kuki size avi 0 hai
    int x;
    cin>>x;
    v.push_back(x);
}
for(int i=0;i<5;i++){
    cout<<v[i]<<" ";
}

}