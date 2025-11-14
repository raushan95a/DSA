#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"enter a number: ";
    cin>>n;
    int a=n;
    while(n>0){
       n=n/10;
       count+=1;
    }
    if(a==0) cout<<1;
    else cout<<count;
    return 0;
}
