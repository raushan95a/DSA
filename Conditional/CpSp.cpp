#include<iostream>
using namespace std;
int main(){
    int c;
    cout<<"enter cost price:";
    cin>>c;
    int s;
    cout<<"enter selling price:";
    cin>>s;
    int p;
    p=s-c;
    if(c<s) {
       
        cout<<"profit "<<p;
    }
    if(c>s) cout<<"loss "<<p;
    if(c==s) cout<<"no profit no loss "<<p;

    return 0;

}