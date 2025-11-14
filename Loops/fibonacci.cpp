#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int a=0,b=1, next;
    for(int i=0;i<=n-2;i++){
        
        next=a+b;
        a=b;
        b=next;
    }
    cout<<b;    
    return 0;
}